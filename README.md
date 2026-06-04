# Conda Artifact Channel Test

Experiment: build a tiny platform-specific conda package with `rattler-build` on GitHub-hosted Linux, macOS arm64, and Windows runners; combine the built packages into a single filesystem channel; index it with `rattler-index`; upload the indexed channel root as a GitHub Actions artifact; then download that artifact in a later job and install/run the package from the downloaded local channel using pixi/rattler tooling.

The first verification proves the channel layout is preserved after extracting/downloading the artifact: the verification job can install `artifact-channel-probe` from the downloaded artifact channel and execute the compiled binary.

The direct-access probe tests the stronger goal: using the GitHub artifact URL itself as a conda channel without downloading/extracting the full channel first. At the time of this experiment, GitHub Actions artifact URLs expose a single ZIP archive, not per-file URLs like `/linux-64/repodata.json`, so this direct probe is expected to fail.

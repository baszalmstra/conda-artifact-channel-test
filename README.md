# Conda Artifact Channel Test

Experiment: build a tiny platform-specific conda package with `rattler-build` on GitHub-hosted Linux, macOS arm64, and Windows runners; combine the built packages into a single filesystem channel; index it with `rattler-index`; upload the indexed channel root as a GitHub Actions artifact; then download that artifact in a later job and install/run the package from the downloaded local channel using pixi/rattler tooling.

Success means the verification job can install `artifact-channel-probe` from the downloaded artifact channel and execute the compiled binary.

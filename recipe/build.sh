#!/usr/bin/env bash
set -euxo pipefail

mkdir -p "${PREFIX}/bin"
"${CC}" ${CFLAGS:-} ${LDFLAGS:-} \
  -DTARGET_SUBDIR=\"${target_platform}\" \
  "${RECIPE_DIR}/probe.c" \
  -o "${PREFIX}/bin/artifact-channel-probe"

#include <stdio.h>

#ifndef TARGET_SUBDIR
#define TARGET_SUBDIR "unknown"
#endif

int main(void) {
#if defined(_WIN32)
    const char *os = "windows";
#elif defined(__APPLE__)
    const char *os = "macos";
#elif defined(__linux__)
    const char *os = "linux";
#else
    const char *os = "unknown-os";
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    const char *arch = "arm64";
#elif defined(__x86_64__) || defined(_M_X64)
    const char *arch = "x86_64";
#else
    const char *arch = "unknown-arch";
#endif

    printf("artifact-channel-probe 0.1.0\n");
    printf("target_subdir=%s\n", TARGET_SUBDIR);
    printf("compiled_os=%s\n", os);
    printf("compiled_arch=%s\n", arch);
    return 0;
}

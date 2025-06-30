
#include <stddef.h>
#include <stdint.h>

void *optimized_memcpy(void *dest, const void *src, size_t n) {
    // Create byte pointers
    uint8_t *d = dest;
    const uint8_t *s = src;

    // Align pointers to size_t boundary for faster copying
    while (n > 0 && ((uintptr_t)d % sizeof(size_t) != 0 || (uintptr_t)s % sizeof(size_t) != 0)) {
        *d++ = *s++;
        n--;
    }

    // Copy in size_t-sized chunks (usually 4 or 8 bytes depending on architecture)
    size_t *d_word = (size_t *)d;
    const size_t *s_word = (const size_t *)s;
    while (n >= sizeof(size_t)) {
        *d_word++ = *s_word++;
        n -= sizeof(size_t);
    }

    // Copy remaining bytes
    d = (uint8_t *)d_word;
    s = (const uint8_t *)s_word;
    while (n--) {
        *d++ = *s++;
    }

    return dest;
}

#include <stdio.h>

static void print_hex(const char *src, int len)
{
    int i = 0;
    while (i < len) {
        printf("%02x", src[i]);
    }

    printf("\n");
}

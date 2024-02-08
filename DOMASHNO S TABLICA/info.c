#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-10s| %-10s| %-15s| %-20s| %-20s| %-20s| %-20s\n", "Type", "Format", "Size in bytes", "Signed Max", "Signed Min", "Unsigned Min", "Unsigned Max");
    printf("%-10s| %-10s| %-15zu| %-20d| %-20d| %-20s| %-20u\n", "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%c", (unsigned char)UCHAR_MAX);
    printf("%-10s| %-10s| %-15zu| %-20d| %-20d| %-20s| %-20u\n", "short", "%d", sizeof(short), SHRT_MAX, SHRT_MIN, "%u", (unsigned short)USHRT_MAX);
    printf("%-10s| %-10s| %-15zu| %-20d| %-20d| %-20s| %-20u\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", (unsigned int)UINT_MAX);
    printf("%-10s| %-10s| %-15zu| %-20ld| %-20ld| %-20s| %-20lu\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", (unsigned long)ULONG_MAX);
    printf("%-10s| %-10s| %-15zu| %-20lld| %-20lld| %-20s| %-20llu\n", "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", (unsigned long long)ULLONG_MAX);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void print_usage() {
    printf("Usage: rva <base_original> <base_target> <absolute_address>\n");
    printf("  <base_original>       - Base Address 0x140000000\n");
    printf("  <base_target>         - Base address for converted absolute \n");
    printf("  <absolute_address>    - Absolute address\n");
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("%d", argc);
        print_usage();
        return 1;
    }

    uint64_t base_o = strtoull(argv[1], NULL, 16);
    uint64_t base_t = strtoull(argv[2], NULL, 16);
    uint64_t aa = strtoull(argv[3], NULL, 16);

    uint64_t result = base_t + (aa - base_o);

    printf("Result: 0x%llx\n", result);

    return 0;
}
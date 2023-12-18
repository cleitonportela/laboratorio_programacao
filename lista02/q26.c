#include <stdio.h>

int main() {
    int num;
    printf("Decimal\t\tBinário\t\tOctal\t\tHexadecimal\n");
    for(num = 1; num <= 256; num++) {
        printf("%d\t\t", num);
        for(int i = 7; i >= 0; i--) {
            printf("%d", (num >> i) & 1);
        }
        printf("\t\t");
        printf("%o\t\t", num);
        printf("%X\n", num);
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    int r;
    int c;
    char s;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter the symbol: ");
    scanf("%c", &s);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c", s);
        }
    }
    return 0;
}
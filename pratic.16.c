/*

*   _  _  _  _
*  *   _  _  _
*  *  *   _  _
*  *  *  *   _
*  *  *  *  *



*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*  ");
        }
        for (int underscor = 1; underscor <= n - i; underscor++) {
            printf(" _ ");
        }

        printf("\n");
    }

    return 0;
}

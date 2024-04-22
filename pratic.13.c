/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
     // Loop each row
    for (int i = 1; i <= n; i++) {
        // Loop to print stars in each row
        for (int j = 1; j <= n; j++) {
            printf("* ");// Print a star followed by a space

        }
        printf("\n");
    }

    return 0;
}
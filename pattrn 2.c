/*

    *
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main() {
    int rows ;
    printf("enter the rows : ");
    scanf("%d",& rows);
    int  star,  col ;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Printing spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");    //print space
        }
        // Printing star
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

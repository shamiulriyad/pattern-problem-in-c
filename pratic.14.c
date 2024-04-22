/*

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>

int main()
{
    int star= n;
    printf("enter the row : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        // Loop to print stars in each row
        for(int j=1; j<= star; j++){
            printf("* ");
        }
        printf("\n");
        star+=1;  // Increment star for the next row
    }




    return 0;
}
/*
    1
   00
  111
 0000
11111

*/
#include<stdio.h>

int main()
{
    int n,row,col;
    printf("enter the n : ");
    scanf("%d",&n);
    for(row=1; row<=n ; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1;col<=row ;col++)
        {
            printf("%d",row%2); //// Print the row by 2
        }
        printf("\n");
    }
    return 0;
}
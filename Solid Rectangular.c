/*
*****
*****                       question
*****
*/
#include<stdio.h>

int main()
{
    int row, columns, i,j;
    printf("enter the mum of row");
    scanf("%d",&row);
    printf("enter the num of columns");
    scanf("%d",&columns);
    for(i=1;i<=row; i++){                   //Solid Rectangular Star print
        for(j=1;j<=columns;j++){
            printf("*");                       
        }
        printf("\n");
    }

    return 0;
}
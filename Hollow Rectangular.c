/*


* * * * *
*       *           //question
* * * * *



*/



#include<stdio.h>

int main()
{
    int row, columns, i,j;
    printf("enter the num of row");
    scanf("%d",&row);
    printf("enter the num of columns");
    scanf("%d",&columns);
    for(i=1;i<=row; i++){                   //Hollow Rectangular Star print condition
        for(j=1;j<=columns;j++){
            if(i==1 || i==row || j==1 || j==columns)
            printf("*");
            else
            printf(" ");                       
        }
        printf("\n");
    }

    return 0;
}
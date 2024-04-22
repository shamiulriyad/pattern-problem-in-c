/*

1
12
123
1234
12345

*/
#include<stdio.h>

int main()
{
    int n,row,col;
    printf("enter the n : ");
    scanf("%d",&n);
    for(row=1; row<=n ; row++)
    {
        for(col=1;col<=row ;col++)// Loop for each column in the row
        {
            printf("%d",col); //print col
        }
        printf("\n");
    }
    return 0;
}
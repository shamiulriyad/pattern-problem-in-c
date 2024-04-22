/*

1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
0 0 0 0 0 0
1 1 1 1 1 1 1
0 0 0 0 0 0
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1

*/
#include<stdio.h>

int main()
{
    int n,col,row;
    printf("enter the n : ");
    scanf("%d",&n);
    // Loop for printing the 1st half of the pattern
    for(row =1; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row%2); // given row is a number divided by 2
        }
        printf("\n");
    }
    // Loop for printing the 2nd half of the pattern
    for(row =n-1; row>=1; row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row%2);    // given row is a number divided by 2
        }
        printf("\n");
    }
    return 0;
}

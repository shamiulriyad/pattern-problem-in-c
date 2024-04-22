/*
     A
    BB
   CCC
  DDDD
 EEEEE
FFFFFF

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
            printf("%c",row+64);    //print row and +64 for letter
        }
        printf("\n");
    }

    return 0;
}

/*

      1
     22
    333
   4444
  55555
 666666
7777777

*/
#include<stdio.h>

int main()
{
    int n,row,col;
    printf("enter the n : ");
    scanf("%d",&n);
    for(row=1; row<=n ; row++)
    {
        // Loop printing space 
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
          // Loop for printing  row
        for(col=1;col<=row ;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}

/*

1
2 2
3 3 3
4 4 4 4
3 3 3 
2 2
1

*/

#include<stdio.h>

int main()
{
    int n,  row,col;
    printf("enter the n : ");
    scanf("%d",&n);
    // 1st half
    for(row=1;row<=n; row++){
        for(col=1;col<=row;col++){

            printf("%d ",row); //print row
        }
        printf("\n");
    }
    //2nd half
    for(row=n-1;row>=1; row--){
        for(col=1;col<=row;col++){

            printf("%d ",row);// print row
        }
        printf("\n");
    }

    return 0;
}
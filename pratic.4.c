/*
A
A B
A B C
A B C D
A B C
A B
A
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

            printf("%c ",64+col); // print col and + 64 for letter
        }
        printf("\n");
    }
    ///2nd half
    for(row=n-1;row>=1; row--){
        for(col=1;col<=row;col++){

            printf("%c ",64+col);
        }
        printf("\n");
    }

    return 0;
}
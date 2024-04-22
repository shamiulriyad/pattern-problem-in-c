/*

A
B B
C C C
D D D D
E E E E E
D D D D
C C C
B B
A

*/
#include<stdio.h>

int main()
{
    int n,  row,col;
    printf("enter the n : ");
    scanf("%d",&n);
    //first half
    for(row=1;row<=n; row++){
        for(col=1;col<=row;col++){

            printf("%c ",64+row); //print row and 64 + for lettre
        }
        printf("\n");
    }
    //2nd lalf
    for(row=n-1;row>=1; row--){
        for(col=1;col<=row;col++){

            printf("%c ",64+row); 
        }
        printf("\n");
    }

    return 0;
}

/*

1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1




*/

#include<stdio.h>

int main()
{
    int n,  row,col;
    printf("enter the n : ");
    scanf("%d",&n);
   //print 1st half print
    for(row=1;row<=n; row++){                       
        for(col=1;col<=row;col++){
            
            printf("%d",col);  // print col                   
        }
        printf("\n");
    }
    //low half print 
    for(row=n-1;row>=1; row--){                       
        for(col=1;col<=row;col++){
            
            printf("%d",col);                     
        }
        printf("\n");
    }

    return 0;
}
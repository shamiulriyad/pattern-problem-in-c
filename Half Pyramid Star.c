/*



*
**                                                              //question
***
****
*****
******

*/
#include<stdio.h>

int main()
{
    int n,  row,col;
    printf("enter the n : ");
    scanf("%d",&n);
   
    for(row=1;row<=n; row++){                       //Condition
        for(col=1;col<=row;col++){
            
            printf("*");                     
        }
        printf("\n");
    }

    return 0;
}
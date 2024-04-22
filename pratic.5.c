/*

1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1

*/




#include <stdio.h>

int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    // for row
    for(i = 0; i < n; i++) {
        //for col
        for(j = 0; j < n; j++)  {
            if((i + j) % 2 == 0) // sum of the row and column indices is even
                printf("1 ");   //print 1 for even
            else
                printf("0 "); //print 0 for odd
        }
        printf("\n");
    }

    return 0;
}

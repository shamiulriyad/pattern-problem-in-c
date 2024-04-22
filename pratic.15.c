// c program to print left half pyramid pattern of star 
/* 

 _  _  _  _ *
 _  _  _ *  *
 _  _ *  *  *
 _ *  *  *  *
*  *  *  *  *

*/

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int underscor = 1; underscor <= n - i; underscor++) {
            printf(" _ ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*  ");
        }

        printf("\n");
    }

    return 0;
}

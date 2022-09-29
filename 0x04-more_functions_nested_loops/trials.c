#include <stdio.h>

int main(){
    int x;
    int *p;
    int **q;

    x = 7;
    p = &x;
    q = &p;

    printf("The address of var %d is", *p);
    printf("Value of var = %d\n", x );
    printf("Value available at *p = %i\n", *p );
    printf("Value available at **q = %d\n", **q);

    return 0;

}
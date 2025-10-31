#include <stdio.h>
#include <math.h>

int main () {

    int a,b;
    printf("enter your num : \n");
    scanf("%d", &a);

    printf("enter your power : \n");
    scanf("%d", &b);

    int r = pow(a,b);
    printf("result is : \n", r);
    return 0;
}
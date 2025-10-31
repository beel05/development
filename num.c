// print no from 0 to the given no //
#include <stdio.h>
int main () {
    int num;
    printf("enter your number: \n");
    scanf("%d", &num);

    int i=0;
    while (i<=num) {
        printf("%d \n", i); i++;
    }
    return 0;
}

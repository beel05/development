#include <stdio.h>
int main () {
    int num;
    printf("Enter your number: \n");
    scanf("%d", &num);

    int i=0; // for even change 1 to 0 //
    while (i<=num) {
        printf("%d \n", i); i+=2;
    }
    return 0;

}
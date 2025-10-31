// printing odd numbers from 1 to the given number //
#include <stdio.h>
int main () {
    int num;
    printf("Enter your number: \n");
    scanf("%d", &num);

    int i=1; // for even change 1 to 0 //
    while (i<=num) {
        printf("%d \n", i); i+=5;
    }
    return 0;

}
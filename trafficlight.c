#include <stdio.h>
int main () {
    char ch;
    printf("what color is traffic light? \n"); 
    // R||r for red, G||g for green & S||s for stop //
    scanf("%c", &ch);

    switch (ch) {
        case 'R' : printf("STOP \n");
        break;
        case 'r' : printf("STOP \n");
        break;
        case 'Y' : printf("WAIT \n");
        break;
        case 'y' : printf("WAIT \n");
        break;
        case 'G' : printf("GO \n");
        break;
        case 'g' : printf("GO \n");
        break;
        default : printf("Invalid Input");
    }
    return 0;
}
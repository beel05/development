/*
INPUT 
3
4

OUTPUT 
1 2 3 4 
1 2 3 4
1 2 3 4
*/



#include <stdio.h>
int main () {
    int col, row, i, j;
    // enter row and column
    scanf("%d", &row);
    scanf("%d", &col);

    for(i=0; i<row; i++) {
        for (j=1; j<col; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
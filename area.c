#include <stdio.h>
void area_rect (float a, float b) ;
void area_squ (float a) ;
void area_cir (float b) ;

int main () {
    float a, b;
    printf("Enter values: ");
    scanf("%f %f", &a, &b);

    area_rect(a, b);
    area_cir(a);
    area_squ(b);
}

void area_cir (float r) {
    float area;
    area = 2*3.14*r*r;
    printf("Area of circle = %f\n", area);
}

void area_rect (float x, float y) {
    float area;
    area = x*y;
    printf("Area of rectangle = %f\n", area);
}

void area_squ (float side) {
    float area;
    area = side*side;
    printf("Area of square = %f\n", area);
}


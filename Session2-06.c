#include <stdio.h>
#define PI 3.14;

int main(){
    float r = 10;
    float area;
    float perimeter;
    area = r * r * PI;
    perimeter = 2 * PI * r;
    printf ("Diện tích của hình tròn là: %f",area);
    printf ("Chu vi của hình tròn là: %f",perimeter);
}
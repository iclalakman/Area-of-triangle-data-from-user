#include <stdio.h>

int main() {
    int base,height,area;

    printf("Enter height: ");
    scanf("%d",&height);
    printf("Enter base: ");
    scanf("%d",&base);

    area = (height*base)/2;
    printf("Area of triangle is %d",area);

    return 0;
}

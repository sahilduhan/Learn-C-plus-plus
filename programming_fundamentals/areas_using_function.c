#include <stdio.h>
float ar(float x)
{
    float result;
    result = 3.14 * x * x;
    return result;
}
float area_rect(float l, float b)
{
    float area_rectangle;
    area_rectangle = l * b;
    return area_rectangle;
}
float perimeter_square(int side)
{
    float peri;
    peri = 4 * side;
    return peri;
}
int main()
{
    float area, r, len, bredth, area_rec, side_sq, peri_sq;
    printf("\n Enter the radius of the circle :");
    scanf("%f", &r);
    area = ar(r);
    printf(" \nthe area of the circle is :%f", area);
    printf("\nenter the length of the rectangle :");
    scanf("%f", &len);
    printf(" enter the breadth of the rectangle :");
    scanf("%f", &bredth);
    area_rec = area_rect(len, bredth);
    printf(" the area of the rectangle is :%f", area_rec);
    printf(" \nenter the side of the square :");
    scanf("%f", &side_sq);
    peri_sq = perimeter_square(side_sq);
    printf(" \nperimeter of the square is :%f", peri_sq);

    return 0;
}
#include <stdio.h>

void main()
{
    double radius;
    printf("半径：");
    scanf("%lf", &radius);

    const double calculated_area = 3.14 * radius * radius;
    printf("円の面積：%lf\n", calculated_area);

}
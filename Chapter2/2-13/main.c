#include <stdio.h>

void main()
{
    double height;
    double weight;

    printf("身長[cm]を入力してください：");
    scanf("%lf", &height);

    printf("体重[kg]を入力してください：");
    scanf("%lf", &weight);

    const double height_m = height / 100.0;
    const double calculated_bmi = weight / (height_m * height_m);
    printf("BMI:%.2f", calculated_bmi);
}
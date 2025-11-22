#include <stdio.h>

void main()
{
    double input[2];
    printf("2つの実数を入力してください。\n");
    printf("実数1：");
    scanf("%lf", &input[0]);
    printf("実数2：");
    scanf("%lf", &input[1]);

    const double percentage = input[0] / input[1] * 100;
    printf("実数1の値は、実数2の%lf%%です\n", percentage);
}
#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];
    printf("2つの整数を入力してください。\n");
    printf("整数1：");
    scanf("%d", &input[0]);
    printf("整数2：");
    scanf("%d", &input[1]);

    const double percentage = (double)input[0] / (double)input[1] * 100;
    printf("実数1の値は、実数2の%lf%%です\n", percentage);
}
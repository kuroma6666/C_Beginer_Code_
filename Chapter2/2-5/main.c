#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];
    printf("２つの整数を入力してください\n");
    printf("整数1：");
    scanf("%d",&input[0]);
    printf("整数2：");
    scanf("%d",&input[1]);
    const int32_t sum = input[0] + input[1];
    const int32_t average = sum / 2;
    const int32_t average_invert_sign = -sum;

    printf("平均値の符号を反転した値：%d\n", average_invert_sign);
    
}
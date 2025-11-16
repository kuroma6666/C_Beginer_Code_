#include <stdio.h>
#include <stdint.h>

void main()
{
    printf("3つの整数を入力してください。\n");
    int32_t input[3];
    printf("整数1：");
    scanf("%d", &input[0]);

    int32_t input_2;
    printf("整数2：");
    scanf("%d", &input[1]);

    int32_t input_3;
    printf("整数3：");
    scanf("%d", &input[2]);

    const int64_t result_value = input[0] + input[1] +input[2];
    printf("合計：%d", result_value);
}
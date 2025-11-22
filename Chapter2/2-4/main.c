#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];

    printf("2つの整数を入力してください。\n");
    
    printf("整数x：");
    scanf("%d", &input[0]);

    printf("整数y：");
    scanf("%d", &input[1]);

    const int32_t add_result_value = input[0] + input[1];
    const int32_t mul_result_value = input[0] * input[1];
    printf("加算：%d\n乗算：%d",add_result_value, mul_result_value);
    
}
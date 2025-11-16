#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input_value;

    printf("整数を入力してください：");
    scanf("%d", &input_value);

    const int32_t result_value = input_value + 12;

    printf("%dに12を加えると%dです。\n",input_value, result_value);
}
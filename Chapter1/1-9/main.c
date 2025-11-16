#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input;

    printf("整数を入力してください：");
    scanf("%d",&input);

    const int32_t result_value = input - 6;

    printf("%dから6を減じると%dです。\n", input, result_value);
}
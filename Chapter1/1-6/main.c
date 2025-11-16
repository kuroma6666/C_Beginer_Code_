#include <stdio.h>
#include <stdint.h>

void main()
{
    //整数値代入
    int16_t input_value;
    input_value = 123;

    printf("input_valueの値は%dです。\n", input_value);

    //整数値初期化
    const int16_t init_value = 456;

    printf("init_valueの値は%dです。\n", init_value);
}
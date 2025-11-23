#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void main()
{
    int32_t input;

    printf("整数を入力してください：");
    scanf("%d", &input);

    printf("絶対値は：%dです。\n", abs(input));
}
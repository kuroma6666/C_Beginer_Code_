#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input;
    printf("整数を入力してください：");
    scanf("%d", &input);
    
    const int32_t CALCULATE_VALUE = 10;
    printf("入力整数に対して%dで演算(加算、減算、乗算、除算（商）、除算（剰余）)\n",CALCULATE_VALUE);
    printf("加算：%d\n", input + CALCULATE_VALUE);
    printf("減算：%d\n", input - CALCULATE_VALUE);
    printf("乗算：%d\n", input * CALCULATE_VALUE);
    printf("除算（商）：%d\n除算（剰余）：%d\n", input/CALCULATE_VALUE, input%CALCULATE_VALUE);
}
#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input;
    printf("整数を入力してください：");
    scanf("%d", &input);

    const int32_t CALCULATE_VALUE = 5;

    printf("入力値を%dで割った商と剰余\n",CALCULATE_VALUE);

    printf("商：%d\n", input / CALCULATE_VALUE);
    printf("剰余：%d\n", input % CALCULATE_VALUE);
}
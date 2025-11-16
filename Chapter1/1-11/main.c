#include <stdio.h>
#include <stdint.h>

void main()
{
    printf("2つの整数を入力して下さい\n");

    int32_t input[2];
    printf("整数1：");
    scanf("%d",&input[0]);

    printf("整数2：");
    scanf("%d",&input[1]);

    const int32_t result_value = input[0] * input[1];

    printf("結果：%d",result_value);

}
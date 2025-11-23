#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];

    printf("２つの整数を入力してください。\n");
    printf("整数1：");
    scanf("%d",&input[0]);
    printf("整数2：");
    scanf("%d",&input[1]);

    if(input[0]==input[1])
    {
        printf("2つの値は同じです。");
    }
    else
    {
        const int32_t max = (input[0] > input[1]) ? input[0] : input[1];
        const int32_t min = (input[0] > input[1]) ? input[1] : input[0];

        printf("小さい方の値：%d\n",min);
        printf("大きい方の値：%d\n",max);
    }
}
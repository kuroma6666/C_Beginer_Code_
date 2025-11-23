#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[4];
    printf("4つの整数を入力してください。\n");
    printf("整数1：");
    scanf("%d", &input[0]);
    printf("整数2：");
    scanf("%d", &input[1]);
    printf("整数3：");
    scanf("%d", &input[2]);
    printf("整数4：");
    scanf("%d", &input[3]);

    int32_t max_value = input[0];
    for(int i=0; i<4; i++)
    {
        if(max_value < input[i]) max_value = input[i];
    }

    printf("最大値：%d", max_value);
}
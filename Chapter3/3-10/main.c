// 問題3-7の3項演算子表現版
#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[3];

    printf("3つの整数を入力してください\n");
    printf("整数1：");
    scanf("%d", &input[0]);
    printf("整数2：");
    scanf("%d", &input[1]);
    printf("整数3：");
    scanf("%d", &input[2]);

    int32_t min_value;
    for(int i=0; i<3; i++)
    {
        (min_value>input[i]) ? min_value = input[i] : 0;
    }

    printf("最小値：%d", min_value);
}
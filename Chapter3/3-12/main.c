#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main()
{
    int32_t input[2];

    printf("2つの整数を入力してください。\n");

    printf("整数1：");
    scanf("%d", &input[0]);
    printf("整数2：");
    scanf("%d", &input[1]);

    const int32_t diff = abs(input[0]-input[1]);
    if(diff > 10)
    {
        printf("それらの差は11以上です。\n");
    }
    else
    {
        printf("それらの差は10以下です。\n");
    }
}
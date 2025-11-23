#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main()
{
    int32_t input;
    printf("整数を入力してください：\n");
    scanf("%d",&input);

    (input%2) ? printf("その数は奇数です。\n"): printf("その数は偶数です。\n");
}
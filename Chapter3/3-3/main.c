#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main()
{
    int32_t input;
    printf("整数を入力してください：");
    scanf("%d", &input);

    if(input == 0) 
    {
        printf("その数は0です。");
        return;
    }
    (input > 0) ? printf("その数は正です。") : printf("その数は負です。");

}
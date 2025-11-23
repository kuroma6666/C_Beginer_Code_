#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[3];

    printf("3つの整数を入力してください。\n");
    printf("整数1：");
    scanf("%d", &input[0]);
    printf("整数2：");
    scanf("%d", &input[1]);
    printf("整数3：");
    scanf("%d", &input[2]);

    if(input[0] == input[1] && input[1] == input[2]) 
    {
        printf("3つの値は等しいです。\n");
    }
    else if(input[0] == input[1] || input[1] == input[2] || input[2] == input[0])
    {
        printf("2つの値が等しいです。");
    }
    else 
    {
        printf("3つの値が異なります。");
    }
}
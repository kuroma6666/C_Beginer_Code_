#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main()
{
    int32_t input[2];
    printf("2つの整数を入力してください\n");
    printf("整数A：");
    scanf("%d", &input[0]);
    printf("整数B：");
    scanf("%d", &input[1]);

    ((input[0] % input[1]) == 0) ? printf("BはAの約数です。") : printf("BはAの約数ではありません。");;

}
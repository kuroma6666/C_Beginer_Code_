#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main()
{
    int32_t input;

    printf("整数を入力してください：");
    scanf("%d", &input);

    const bool is_not_ten_times = ((input % 10) != 0) ? true : false;
    if(is_not_ten_times) printf("その数は10の倍数ではありません。");

}
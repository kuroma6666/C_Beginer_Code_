#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t height;
    printf("身長を入力してください。");
    scanf("%d", &height);

    const double weight = (double)(height - 100)* 0.9;
    printf("標準体重:%.1f\n", weight);

}
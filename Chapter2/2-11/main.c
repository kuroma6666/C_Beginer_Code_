#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[3];
    printf("台形の面積を求めます。\n");
    printf("上辺：");
    scanf("%d", &input[0]);

    printf("下辺：");
    scanf("%d", &input[1]);

    printf("高さ：");
    scanf("%d", &input[2]);

    const double calculated_area = (double)(input[0] + input[1]) * (double)input[2] / 2.0;
    printf("台形の面積：%lf", calculated_area);    
}
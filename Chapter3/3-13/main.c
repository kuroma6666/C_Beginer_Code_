#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t point = 0;

    printf("点数：");
    scanf("%d", &point);

    if(point<0 || point>100)
    {
        printf("不正な点数です。");
        return;
    }

    if(point<=59)
    {
        printf("不可");
    }
    else if(point<=69)
    {
        printf("可");
    }
    else if(point<=79)
    {
        printf("良");
    }
    else if(point<=100)
    {
        printf("優");
    }
}
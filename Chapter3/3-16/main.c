#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t month;
    printf("何月かを入力してください：");
    scanf("%d", &month);
    printf("%d月は",month);

    if(month>=3 && month<=5)
    {
        printf("春です");
    }
    else if(month>=6 && month<=8)
    {
        printf("夏です");
    }
    else if(month>=9 && month<=11)
    {
        printf("秋です");
    }
    else if(month==12 || month==2 || month==1)
    {
        printf("冬です");
    }
    else
    {
        printf("不正な月です。");
    }

}
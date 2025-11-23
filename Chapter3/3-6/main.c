#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];

    printf("2つの整数を入力してください。\n");
    printf("整数A：");
    scanf("%d", &input[0]);
    printf("整数B：");
    scanf("%d", &input[1]);

    printf("<---等価式--->\n");
    printf("A==B：%d\n", input[0]==input[1]);
    printf("A!=B：%d\n", input[0]!=input[1]);

    printf("<---比較式--->\n");
    printf("A>B：%d\n", input[0]>input[1]);
    printf("A>=B：%d\n", input[0]>=input[1]);
    printf("A<B：%d\n", input[0]<input[1]);
    printf("A<=B：%d\n", input[0]<=input[1]);
}
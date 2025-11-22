#include <stdio.h>
#include <stdint.h>

void main()
{
    int32_t input[2];

    printf("整数xの入力：");
    scanf("%d", &input[0]);

    printf("整数yの入力：");
    scanf("%d", &input[1]);

    const int32_t calculate_percent = (100 * input[0]) / input[1];
    printf("整数xは整数yの%d%%\n", calculate_percent);
    
}
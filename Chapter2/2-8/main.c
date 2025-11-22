#include <stdio.h>
#include <stdint.h>

#define TYPES_AND_OPERATIONS
void main()
{
    int32_t n_input[2];
    double d_input[2];

    printf("整数1:");
    scanf("%d", &n_input[0]);
    printf("整数2:");
    scanf("%d", &n_input[1]);

    printf("実数1:");
    scanf("%lf", &d_input[0]);
    printf("実数2:");
    scanf("%lf", &d_input[1]);

    // [int32_t]と[int32_t]演算
    printf("n1 * n2 = %d \n", n_input[0] * n_input[1]);
    printf("n1 / n2 = %d \n", n_input[0] / n_input[1]);
    
    // [int32_t]と[double]演算
    printf("n1 * n2 = %lf \n", n_input[0] * d_input[1]);
    printf("n1 / n2 = %lf \n", n_input[0] / d_input[1]);

    // [double]と[double]演算
    printf("n1 * n2 = %lf \n", d_input[0] * d_input[1]);
    printf("n1 / n2 = %lf \n", d_input[0] / d_input[1]);

}
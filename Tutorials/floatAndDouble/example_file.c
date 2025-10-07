#include <stdio.h>

int main()
{
    float float_1 = 11.27;
    float float_2 = 11.12345678910;

    printf("float1: %f, float2: %f\n", float_1, float_2);

    double double_1 = 11.12345678910;

    printf("float2: %.10f, double_1: %.10lf", float_2, double_1);
}
#include <stdio.h>
#include <math.h>

int main()
{
    const float PI = 3.1415;

    printf("半径为2的圆的面积是:%.2f\n", PI * pow(2, 2));
    printf("半径为8的圆的面积是:%.2f\n", PI * pow(8, 2));
}
// 如果a大于b，那么打印a与b的差值。否则打印出b减a的值。

#include <stdio.h>

int main()
{
    int a = 2;
    int b = 8;

    if (a > b)
    {
        printf("a - b:%d\n", a - b);
    }
    else
    {
        printf("b - a:%d\n", b - a);
    }
}
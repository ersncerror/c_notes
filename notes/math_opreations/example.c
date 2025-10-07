#include <stdio.h>
#include <math.h>

int main()
{
    int result_1;
    result_1 = 2 + 10 / 8 * 3;
    // 有时公式过长可以先定义后在另一行赋值，取决于个人偏好。

    printf("result: %d\n", result_1);

    double result_2;
    result_2 = 2 + 10 / 8.0 * 3;

    printf("result_2: %lf\n", result_2);

    // 一元二次求根公式
    int a = -1;
    int b = -2;
    int c = 3;

    double delta = sqrt(pow(b, 2) - 4 * a * c);
    double x_1 = (-b + delta) * 2 / a;
    double x_2 = (-b - delta) * 2 / a;

    printf("%lf, %lf\n", x_1, x_2);

    // 兄弟，我脑袋疼。
}
#include <stdio.h>

int main()
{
    int exit = 0;

    while (exit != 1)
    {
        int mode;

        printf("输入1进行加算，输入2进行减算，输入0退出：");

        scanf("%d", &mode);

        if (mode == 1) {
            int a;
            int b;

            printf("请输入第一个数字以进行整数加算：");
            scanf("%d", &a);

            printf("请输入第二个数字以进行整数加算：");
            scanf("%d", &b);

            printf("结果：%d\n", a + b);
        } else if (mode == 2) {
            int a;
            int b;

            printf("请输入第一个数字以进行整数减算：");
            scanf("%d", &a);

            printf("请输入第二个数字以进行整数减算：");
            scanf("%d", &b);

            printf("结果：%d\n", a - b);
        } else if (mode == 0) {
            exit = 1;
        } else {
            printf("错误：未知操作。\n");
        }
    }
}
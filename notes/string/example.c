#include <stdio.h>

int main()
{
    int n = 0;
    char name[16];

    printf("请输入要打招呼的总人数：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("请输入要打招呼的人名：");
        scanf("%15s", name);

        printf("%s，你好。\n", name);
    }

    printf("你已经打完所有招呼！\n");
}
#include <stdio.h>

int main()
{
    int arr[5];

    printf("请输入五个整数。\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("以下是被输入的整数。\n");

    for (int i = 0; i < 5; i++)
    {
        printf("第%d位: %d\n", i, arr[i]);
    }
}
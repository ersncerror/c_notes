#include <stdio.h>

int main()
{

    for (int i = 1; i <= 50; i++)
    {

        if (i % 2 != 0)
        {
            continue;
        }

        if (i % 3 == 0)
        {
            continue;
        }

        printf("ż�����ǲ��ܱ�3����: %d\n", i);
    }
}
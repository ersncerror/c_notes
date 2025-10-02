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

        printf("偶数但是不能被3整除: %d\n", i);
    }
}
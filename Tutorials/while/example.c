#include <stdio.h>

int main()
{

    int n = 1;
    int summary = 0;

    while (n < 101)
    {
        n += 1;

        if (n % 2 == 0)
        {
            summary = summary + n;
        }
    };

    printf("1��100������ż���ĺ�Ϊ: %d \n", summary);

    n = 1;
    summary = 0;

    do
    {
        n += 1;

        if (n % 2 == 0)
        {
            summary = summary + n;
        }
    } while (n < 101);
}

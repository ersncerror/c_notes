#include <stdio.h>

int main()
{
    int userType = 2;
    double price = 180;
    double pay;

    if (userType == 1)
    {
        if (price > 100)
        {
            pay = price * 0.95;
        }
        else
        {
            pay = price;
        }
    }
    else if (userType == 2)
    {
        if (price > 200)
        {
            pay = price * 0.9;
        }
        else
        {
            pay = price * 0.97;
        }
    }
    else
    {
        printf("Invaild user type.\n");
        return 1;
    }

    printf("final pay price: %.2lf\n", pay);
}
#include <stdio.h>

int main()
{
    int category = 2;
    float price = 299.9;

    switch (category)
    {
    case 1:
        if (price < 500)
        {
            printf("electric product low price, no off");
        }
        else if (price <= 1000)
        {
            printf("electric product can have 5 percent off");
        }
        else
        {
            printf("electric product can have 10 percent off");
        }
        break;
    case 2:
        if (price < 200)
        {
            printf("cloth price low, no off.");
        }
        else if (price <= 500)
        {
            printf("cloth can have 8 percent off.");
        }
        else if (price > 500)
        {
            printf("cloth can have 15 percent off.");
        }
        break;
    default:
        printf("invaild category type.");
    }
}
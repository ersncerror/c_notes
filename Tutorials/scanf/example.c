#include <stdio.h>

int main()
{
    char category;
    float price;

    printf("��������Ʒ���, A=����, B=�·�\n");
    scanf("%c", &category);
    printf("��������Ʒ�۸�\n");
    scanf(" %f", &price);

    switch (category)
    {
    case 'A':
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
    case 'B':
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
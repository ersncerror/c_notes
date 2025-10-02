#include <stdio.h>

int main()
{
    char category;
    float price;

    printf("请输入商品类别, A=电器, B=衣服\n");
    scanf("%c", &category);
    printf("请输入商品价格\n");
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
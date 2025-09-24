#include <stdio.h>

int main()
{
    // \n -> 换行
    // \" -> 单纯双引号
    // \\ -> 这是\符号！
    // printf默认不会换行，如需要，可以在字符串开头或末尾添加 "\n" !

    printf("Hello World!\n");
    printf("How are you? \"I'm fine thank you!\"\n");
    printf("Hello\n World!\n");
    printf("The #include files is on C:\\msys64\\mingw64\\include!");
    return 0;
}
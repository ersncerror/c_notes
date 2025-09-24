#include <stdio.h>

int main()
{
    // %d = 十进制 (idk
    // 若函数返回的是整体类型，且不返回任何值，那么会默认返回0。

    int mike_score = 89;
    int john_score = 98;

    printf("John's wrong score: %d\n", john_score);
    printf("Mike's wrong score: %d\n", mike_score);

    mike_score = john_score;
    john_score = 89;

    printf("John's correct score: %d\n", john_score);
    printf("Mike's correct score: %d\n", mike_score);

    return 0;
}
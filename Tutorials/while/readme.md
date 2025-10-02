# while
与`if`不同，`while`语句会不断地判断、执行，直到条件为假才会跳出循环。

```c

int main() 
{
    while(/*表达式*/) {
        // 当条件为真，这里的代码将会被执行。
    }
}

```

## 代码示例

假设我们想要从现在开始每天攒100块钱，直到够换一部新手机。

```c

#include <stdio.h>

int main() {
    double price = 2999.9; // 手机价格
    int money = 0; //存下来的钱

    while (money < price) {
        money = money + 100;
        printf("现在攒了%d元了。\n", money);
    }

     printf("攒了%d元，够钱买新手机啦！\n", money);
}

```

在此代码示例中，会先判断`money`（存下来的钱）是否小于`price`（手机价格），如果`money`小于`price`那么就会给`money`加100，重复循环这么做直到`money`大于`price`。

# do while
与`while`不同，`do while`会先执行代码后检查条件，如果条件通过便继续执行对应代码。

```c

do {
    // 执行代码
} while (/*表达式*/);

```

### 代码示例

```c

#include <stdio.h>

int main() {
    double price = 2999.9; // 手机价格
    int money = 0; //存下来的钱

    do {
        money = money + 100;
        printf("现在攒了%d元了。\n", money);
    } while(money < price);

    printf("攒了%d元，够钱买新手机啦！\n", money);
}

```

在此代码示例中，由于我们使用`do while`，攒钱代码会先被执行后判断是否有足够的钱来购买新手机。

**在大多数情况下请确认`while`是否能退出循环，若因为一些问题而造成了死循环则可能导致设备卡顿。**
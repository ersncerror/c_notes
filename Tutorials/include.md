# include
在C语言中，`#include`是用于在编译之前包含一个文件，其中，包含的文件会提供原本不具有的函数供你使用。

### 使用
在大多数情况下`#include`应当总是在代码的最上方。

要包含一个文件，我们需要这么写：

```c
#include <stdio.h>
```
包含一个文件还需要用`< >`符号将文件名放在里面。
在这里，我们包含了一个名为`stdio.h`的头文件，其全称为标准输入库。

这时我们便可以使用该头文件包含的函数，例如`printf`。

## printf
这个函数用于打印内容，例如打印`Hello World!`。

>[!NOTE]
> 此函数只有在包含`stdio.h`才能被调用。

```c
#include <stdio.h>

int main() {
    printf("Hello World!");

    // 输出结果：
    // Hello World!
}

```

我们也可以让计算打印更多的内容，但在此时我们会发现一个问题。

```c
#include <stdio.h>

int main() {
    printf("Hi!");
    printf("Hello!");

    // 输出结果：
    // Hi!Hello!
}
```

在这里两个打印出的文本"粘在了一起"，看上去并不美观，假设我们希望他们分行打印。

我们可以使用`\n`来让打印的结果分行，使接下来打印的内容打印在下一行。
```c
#include <stdio.h>

int main() {
    printf("Hi!\n");
    printf("Hello!");

    // 输出结果：
    // Hi!
    // Hello!
}
```
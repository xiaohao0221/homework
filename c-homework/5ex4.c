// 对代码清单5-6中的程序进行修改，
// 将数组a中的元素按照倒序复制到数组b中。

#include<stdio.h>

int main (void) {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5];
    int i;

    for (i = 0; i < 5; ++i) {
        v2[i] = v1[4 - i];
    }
    puts("   a   b   ");
    puts("-----------");
    for (i = 0; i < 5; ++i)
        printf("%4d%4d\n", v1[i], v2[i] );
    return 0;
}
// 编写一段程序，根据输入的整数，循环显示 1234567890 ，
// 显示的位数和输入的整数值相同。

#include<stdio.h>

int main (void) {
    int n, i, j = 1;
    printf("输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("%d", j );
        ++j;
        if (j >= 10)
            j -= 10;
    }
    printf("\n");
    return 0;

}


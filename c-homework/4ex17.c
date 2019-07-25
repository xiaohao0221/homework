// 编写一段程序，显示1到n的整数值的二次方。
#include <stdio.h>

int main (void) {
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; ++i)
        printf("%d的二次方是%d\n", i, i * i );

    printf("\n");
    return 0;


}
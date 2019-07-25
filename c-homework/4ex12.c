// 读取一个正整数，显示其位数
#include <stdio.h>

int main (void) {
    int i = 0, no;
    do {
        printf("请输入一个正整数:" );
        scanf("%d", &no);
    } while (no <= 0);


    while (no > 0) {
        ++i;

        no /= 10;
    }
    printf("该数位数为：%d\n", i);

    return 0;

}
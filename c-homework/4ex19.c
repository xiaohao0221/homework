// 显示一个数的所有约数及其约数的个数
#include<stdio.h>

int main (void) {
    int no , m, cnt = 0;
    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (m = 1; m <= no; ++m) {
        if (no % m == 0) {
            cnt += 1;
            printf("%3d\n", m);

        }
    }
    printf("约数个数：%d\n", cnt );
    return 0;
}
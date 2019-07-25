/*
    求三个整数中最大的值
*/
#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}
int main(void) {
    int l, m, n;
    puts("输入三个整数：");
    printf("No.1:"); scanf("%d", &l);
    printf("No.2:"); scanf("%d", &m);
    printf("No.3:"); scanf("%d", &n);

    printf("最大的整数是：%d\n", max3(l, m, n ));

    return 0;
}
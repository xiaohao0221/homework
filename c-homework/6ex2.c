// 创建一个函数，返回三个int型整数中的最小值。
#include<stdio.h>
int a, b, c, min;
int min3(a, b, c) {
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;

}
int main (void) {
    int m , l , n;
    puts("输入三个整数：");
    printf("No.1:"); scanf("%d", &m);
    printf("No.2:"); scanf("%d", &l);
    printf("No.3:"); scanf("%d", &n);

    printf("最小值为%d\n", min3(m, l, n) );
    return 0;
}
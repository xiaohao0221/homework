/*
    计算n次幂
*/
#include <stdio.h>
#include<stdio.h>
double m(double x, int n) {
    int i;
    for (i = 1; i < n; ++i) {
        x *= x;
    }
    return x;

}

int main(void) {
    double l;
    int p;
    printf("输入一个数:"); scanf("%lf", &l);
    printf("输入次数："); scanf("%d", &p);

    printf("%.2f的%d次幂为%.4f", l, p, m(l, p));
    return 0;
}
/*
    计算两个整数的平方差
*/
#include <stdio.h>
int diff(int a, int b) {
    if (a > b) return a * a - b * b;
    else return (b * b - a * a);
}
int main(void) {
    int m, n;
    printf("请输入整数1：");
    scanf("%d", &m);
    printf("请输入整数2：");
    scanf("%d", &n);

    printf("平方差为%d\n", diff(m, n) );
    return 0;

}
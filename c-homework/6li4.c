/*
    求四个整数中的最大值
*/
#include <stdio.h>
int max2(int a, int b) {
    return (a > b) ? a : b;

}
int main(void) {
    int a, b, c, d;
    printf("输入整数1："); scanf("%d", &a);
    printf("输入整数2："); scanf("%d", &b);
    printf("输入整数3："); scanf("%d", &c);
    printf("输入整数4："); scanf("%d", &d);

    printf("最大值为%d\n", max2(max2(a, b), max2(c, d)) );
    return 0;
}
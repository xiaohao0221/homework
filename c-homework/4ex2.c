#include <stdio.h>

int main  (void)

{
    int no1, no2, n, sum, m, l;

    printf("整数1：");
    scanf("%d", &no1);
    printf("整数2：");
    scanf("%d", &no2);

    if (no2 >= no1) {
        n = no2 - no1 + 1;
    } else
        n = no1 - no2 + 1;

    sum = no1 + no2;
    m = sum * n;
    l = m / 2;

    printf("所求和为：%d\n", l - no1 - no2);



    return 0;
}
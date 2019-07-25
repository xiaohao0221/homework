/*
    输入规定个数整数并显示出它们的合计值和平均值(for)
*/
#include <stdio.h>

int main(void) {
    int cnt = 0, sum = 0, i, no;
    printf("输入整数个数：" );
    scanf("%d", &cnt);

    for (no = 1; no <= cnt; ++no) {
        printf("整数%d:", no );

        scanf("%d", &i);
        sum += i;
    }
    printf("合计值：%d,平均值：%.3f", sum, (double)sum / cnt);
    printf("\n");
    return 0;
}
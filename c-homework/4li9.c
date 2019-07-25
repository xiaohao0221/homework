/*
    输入规定个数整数并显示出它们的合计值和平均值
*/
#include <stdio.h>

int main (void) {
    int i = 0, cnt, sum = 0, m;

    printf("要输入整数个数：" );
    scanf("%d", &cnt);

// while
// 	(i++<cnt)
// {
// printf("数%d：",i);
// scanf("%d",&m);
// sum=sum+m;
// }

    while (i < cnt) {
        ++i;
        printf("数%d:", i );
        scanf("%d", &m);
        sum += m;

    }

    printf("合计值:%d\n", sum);
    printf("平均值：%.2f\n", (double)sum / cnt);

    return 0;

}
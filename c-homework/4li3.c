#include<stdio.h>

int main (void) {
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("请输入一个整数：");
        scanf("%d", &t);
        sum = sum + t;
        cnt = cnt + 1;

        printf("是否继续？ 【是...1/否...0】");
        scanf("%d", &retry);


    } while (retry == 1);

    printf("和：%d,平均值：%.3f\n",sum,(double)sum/cnt);

    return 0;




}
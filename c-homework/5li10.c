/*
    输入5名学生的分数并显示出他们的总分和平均分（宏）
*/
#include <stdio.h>

#define NUMBER 7 /*学生人数*/

int main (void) {
    int v[NUMBER];
    int i;
    int sum = 0;

    for (i = 0; i < NUMBER; ++i) {
        printf("学生%d：", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < NUMBER; ++i) {
        sum += v[i];
    }
    printf("总分：%d，平均分：%d\n", sum, sum / NUMBER );

    return 0;
}
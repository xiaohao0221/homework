/*
    输入5名学生的分数并显示出他们的总分和平均分
*/
#include <stdio.h>

int main(void) {
    int v[5];
    int i;
    int sum = 0;

    for (i = 0; i < 5; ++i) {
        printf("学生%d:", i + 1 );
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 5; ++i) {
        sum += v[i];
    }
    printf("总分：%d，平均分：%d\n", sum, sum / 5 );
    return 0;
}

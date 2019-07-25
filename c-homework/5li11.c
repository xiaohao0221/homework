/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/
#include <stdio.h>

#define NUMBER 5

int main(void) {
    int i;
    int max;
    int min;
    int v[NUMBER];

    for (i = 0; i < NUMBER; ++i) {
        printf("学生%d：", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 1; i < NUMBER; ++i) {
        max = min = v[0];
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }
    printf("最高分：%d,最低分：%d\n", max, min);


    return 0;
}

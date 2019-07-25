/*
    对数组的全部元素进行倒序排列
*/
#include <stdio.h>

int main(void) {
    int i;
    int v[8];
    int temp = 0;

    for (i = 0; i < 8; ++i) {
        printf("v[%d]:", i);
        scanf("%d", &v[i]);

    }
    for (i = 0; i < 4; ++i) {
        temp = v[i];
        v[i] = v[7 - i];
        v[7 - i] = temp;
        printf("\n");

    }
    for (i = 0; i < 8; ++i)
        printf("v[%d}=%d\n", i, v[i]);


    return 0;
}
/*
    输入数组元素的值并显示
*/
#include <stdio.h>

int main (void) {
    int v[5];
    int i;

    for (i = 0; i < 5; ++i) {
        printf("v[%d]:", i);
        scanf("%d", &v[i]);
    }
    printf("\n");
    for (i = 0; i < 5; ++i) {
        printf("v[%d]=%d\n", i, v[i] );
    }
    return 0;
}
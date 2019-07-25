/*
    把数组中的全部元素复制到另一个数组中
*/
#include <stdio.h>

int main(void) {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5];
    int i;

    for (i = 0; i < 5; ++i) {
        v2[i] = v1[i];
    }
    puts("   a   b   ");
    puts("-----------");


    for (i = 0; i < 5; ++i)
        printf("%4d%4d\n", v1[i], v2[i] );

    return 0;


}
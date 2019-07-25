/*
    将数组的全部元素赋值为0.0并显示
*/
#include <stdio.h>

#define N 9
int main(void) {

    int i;
    double v[N];

    for (i = 0; i < N; ++i) {

        printf("v[%d]=%.1f\n", i, 0.0 );
    }



    return 0;
}

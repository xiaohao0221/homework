// *
//     对数组的全部元素进行倒序排列
// */
#include <stdio.h>

#define N 8
int main(void) {
    int v[N];
    int i;
    int temp;

    for (i = 0; i < N; ++i) {
        printf("v[%d]:", i );
        scanf("%d", &v[i]);
    }
    printf("\n");
    for (i = 0; i < N / 2; ++i) {
        temp = v[i];
        v[i] = v[N - 1 - i];
        v[N - 1 - i] = temp;
    }
    for (i = 0; i < N; ++i)
        printf("v[%d]=%d\n", i, v[i]);
    return 0;
}

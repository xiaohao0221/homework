// *
//     输入一个整数，连续显示出该整数个 *（for）
// */
#include <stdio.h>

int main(void) {
    int no, i;
    do {
        printf("请输入一个非负数：" );
        scanf("%d", &no);
    } while (no < 0);

    for (i = 0; i < no; i++)
        putchar('*');
    printf("\n");

    return 0;

}
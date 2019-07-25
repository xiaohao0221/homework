/*
    显示输入的整数值以下的偶数
*/
#include <stdio.h>

int main (void) {
    int no, i, m;

    printf("请输入一个正整数：" );
    scanf("%d", &no);

    for (i = 2; i <= no; i += 2)
        // 用i+=2表示递加2
    {
        printf("%3d", i );

    }
    printf("\n");
    return 0;

}
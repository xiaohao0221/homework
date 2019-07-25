#include <stdio.h>

int main (void) {

    int no, m;
    printf("请输入一个正整数：" );
    scanf("%d", &no);

    if (no % 2) {
        m = no - 1;

        while (m >= 2) {

            printf("%d\n", m);

            m = m - 2;
        }
    }

    else
        m = no ;
    while (m >=2) {
        printf("%d\n", m);

        m = m - 2;
    }

    return 0;

}
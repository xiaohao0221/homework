#include<stdio.h>

int main (void) {

    int no;
    do {
        printf("请输入一个正整数：" );
        scanf("%d", &no);
    } while (no <= 0);

    printf("您输入的整数为:%d\n", no );
    printf("该整数的逆向显示为：");
    while (no > 0) {
        printf("%d", no % 10 );
        no /= 10;
    }
    printf("\n");

    return 0;
}
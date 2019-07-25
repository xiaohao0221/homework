#include<stdio.h>

int main (void) {
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    int n = 1;

    while (n < no) {
        printf("%d\n", n );
        n = n * 2;
    }

    return 0;
}

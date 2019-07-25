#include <stdio.h>

int main (void) {
    int retry;
    do {
        int no;
        printf("请输入一个整数：");
        scanf("%d", &no);

        switch (no % 2) {
        case 0: puts("这个数是偶数。"); break;
        case 1: puts("这个数是奇数。"); break;
        }

        printf ("还需要再重复一次吗？【YES...1/NO...0】");
        scanf("%d", &retry);

    } while (retry == 1);

    return 0;
}
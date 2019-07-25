// 逆向显示数

#include <stdio.h>

int main (void)

{
    int m, no;

    do {
        printf("请输入一个正整数：" );
        scanf("%d", &no);

    } while (no <= 0);

    printf("该整数逆向显示为：" );
    while (no > 0) {
        m = no % 10;
        printf("%d" , m);

        // 此处直接写为"printf("%d",no%10 );"更好
        no = no / 10;
        // 此处写为"no /=10"更好


    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main (void) {
    char name[48];
    printf("请输入姓名：");
    scanf("%s", name);
    printf("您好，%s\n", name );

    return 0;
}
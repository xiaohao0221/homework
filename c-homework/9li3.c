/*
将字符串存储在数组中并显示（其2:初始化）
*/
#include<stdio.h>
int main (void) {
    char str[] = "abc\0def";
    printf("字符串为%s\n", str );
    return 0;
}
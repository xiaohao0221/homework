/*
将字符串存储在数组中并显示（其1:赋值）
*/
#include<stdio.h>
int main (void) {
    char string[8];
    string[0] = 'x';
    string[1] = 'i';
    string[2] = 'a';
    string[3] = 'o';
    string[4] = 'h';
    string[5] = 'a';
    string[6] = 'o';
    string[7] = '\0';

    printf("字符串string为\"%s\"\n", string );

    return 0;
}
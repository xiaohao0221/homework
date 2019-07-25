#include<stdio.h>
int main (void)

{
    int i, j, no1, no2;
    printf("输入长：");
    scanf("%d", &no1);
    printf("输入宽：");
    scanf("%d", &no2);

    for (i = 1; i <= no1; ++i) {
        for (j = 1; j <= no2; ++j)
            putchar('*');
        printf("\n");
    }
    printf("\n");
    return 0;


}
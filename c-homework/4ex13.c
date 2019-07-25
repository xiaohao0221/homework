// 编写一段程序，求 1 到 n 的和。 n 的值从键盘输入。
#include <stdio.h>

int main (void) {
    int sum = 0, i, n;
    printf("输入整数:" );
    scanf("%d", &n);
// if(n==0)
// 	printf("和为1");

// else if(n>0)
    for (i = 1; i <= n; ++i)
        sum = sum + i;
    printf("和为：%d\n", sum );
// else 
// 	{for (i= -1; i>=n; ++i)
// 		sum=sum+i;
// 	printf("和为：%d\n",sum+1 );} 
    
    return 0;

}
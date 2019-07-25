#include <stdio.h>

int main(void)
{
int A;
printf("请输入一个整数值：");
scanf("%d", &A);

if (A>=0)
	printf("该整数绝对值为%d\n",A);
// else if (A==0)
// 	puts("该整数绝对值为%d",A);
else
	printf("该整数绝对值为%d\n",-A);

return 0;
}
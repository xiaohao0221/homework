#include <stdio.h>
int main(void)
{
	int a,b;
	puts("请输入两个整数：");
	printf("整数1:" );
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);

	if(a==b)
		puts("1");
	else
		puts("0");

	return 0;
}
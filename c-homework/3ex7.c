#include<stdio.h>
int main(void)
{
	int a,b,c,d,max;
	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	printf("整数4:");
	scanf("%d",&d);

	max=a;

	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;

	printf("最大整数是%d\n",max);

	return 0;

	
}
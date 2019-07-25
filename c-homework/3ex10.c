#include<stdio.h>
int main (void)
{
	int a,b,c;
	printf ("整数1:");
	scanf("%d",&a);
	printf ("整数2:");
	scanf("%d",&b);
	printf ("整数3:");
	scanf("%d",&c);

	if(a==b && b==c)
	printf("三个值都相等。\n");
else if(a!=b &&a!=c &&b!=c)
	printf("三个值各不相同。\n");
else
	printf("有两个值相等。\n");

	return 0;
}
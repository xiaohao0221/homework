/*
   用递减运算符 从输入的负整数开始倒数到0
*/

#include<stdio.h>

int main(void)
{
int no;
printf("请输入一个整数：" );
scanf("%d",&no);
while(no<0)
	printf("%d",++no);
printf("\n");
return 0;
}


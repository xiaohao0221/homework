// 创建一个函数，返回int型整数的立方。
#include<stdio.h>
int a;
int cube3(a){
a=a*a*a;
	return a;
}

int main (void){
	int m;
	printf("输入一个整数：");
	scanf("%d",&m);
	printf("该整数立方为：%d\n",cube3(m));
	return 0;
}
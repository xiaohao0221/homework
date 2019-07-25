/*
    不停的输入整数，显示其和及平均值（使用复合赋值运算符和后置递增运算符）
*/
#include <stdio.h>

int main (void)
{
	int sum=0,cnt=0,retry;
	do{
		int n;

	printf("请输入整数：");
	scanf("%d",&n);
sum+=n;
cnt++;
printf("是否继续输入整数：【是...1/否...0\n");
scanf("%d",&retry);
}while(retry==1);

printf("和为：%d,平均值为:%.3f\n",sum,(double)sum/cnt);

return 0;
}

// #include<stdio.h>

// int main (void)

// int sum=0,cnt=1,retry,n;
// printf("请输入一个整数：\n" );
// scanf("%d",&n)

// sum+=n;
// printf("是否继续输入整数：【是...1/否...0\n");
// scanf("%d",&retry);
// while(retry==1){
	
// }




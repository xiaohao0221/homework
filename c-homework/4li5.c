/*
    从输入的负整数开始倒数到0
*/
#include <stdio.h>

int main (void)
{
	int no;
	printf("输入一个整数：");
	scanf("%d",&no);

	while(no<=0){
		printf("%3d",no);
		no++;
	}
	printf("\n");
	return 0;
}


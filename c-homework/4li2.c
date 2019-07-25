#include <stdio.h>

int main (void)
{int hand;
	do{
		printf("请选择出什么拳？【0...石头/1...剪刀/2...布】：");
	scanf("%d",&hand);

	}while(!(hand>=0&&hand<=2));

	if(hand==0)
		puts("你选择了石头。");
	else if (hand==1)
		puts("你选择了剪刀。");
	else 
		puts("你选择了布。");

	return 0;
	
}
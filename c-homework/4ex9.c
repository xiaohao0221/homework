#include<stdio.h>

int main (void)
{
int i=1,m,n;

printf("请输入整数:" );
scanf("%d",&m);

if(m>=1){
while(i<=m){
	// n=i++;
	// if(n%2)
	if(i++%2)
putchar('+');
else
putchar('-');
}
}else
	printf("\n");
return 0;


}
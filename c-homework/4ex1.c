/*
    判断输入的整数的符号
*/
// #include <stdio.h>

// int main(void)
// {
//     int no,retry;

//     printf("请输入一个整数：");
//     scanf("%d", &no);

// do{puts("该整数为0");

// do{printf("是否继续？ 【是...1/否...0】" );
// scanf("%d",&retry);}
// while(retry==1);}
// while(no==0);

// do{puts("该整数为正数");

// do{printf("是否继续？ 【是...1/否...0】" );
// scanf("%d",&retry);}
// while(retry==1);}
// while(no>0);

// do{puts("该整数为负数");

// do{printf("是否继续？ 【是...1/否...0】" );
// scanf("%d",&retry);}
// while(retry==1);}
// while(no<0);
    
    
        

//     return 0;
// }

#include <stdio.h>

int main (void)
{
    int no;
    printf("输入整数：" );
    scanf("%d",&no);

    while(no==0){
        printf("该整数为0。\n");break;
    }
while(no>0){
    printf("该整数为正数。\n");break;
}
while(no<0){
    printf("该整数为负数。\n");break;
}

return 0;
}
























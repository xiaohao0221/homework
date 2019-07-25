// 编写一段程序，显示出身高和标准体重的对照表。
// 显示的身高范围和间隔由输入的整数值进行结控制，
// 标准体重精确到小数点后2位。

#include<stdio.h>

int main (void) {
    int no1, no2, m, i, w;
    printf("最低身高：");
    scanf("%d", &no1);
    printf("最高身高：" );
    scanf("%d", &no2);
    printf("间隔数值：");
    scanf("%d", &m);

    for (i = no1; i <= no2; i += m){
        w = (i - 100) * 0.9;
    
    printf("%dcm\t\t%.3fkg\n", i , (double)w);
}
    return 0;


}
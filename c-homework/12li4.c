#include<stdio.h>
#define Name_Len 64

struct student {
    char name[Name_Len];
    int height;
    float weight;
    long schols;
};

void change(struct student * std) {
    if (std->height < 180)std->height = 180;
    if (std->weight > 80)std->weight = 80;
};
int main(void) {
    struct student sanaka = {"sanaka", 175, 88, 1234554321};
    change(&sanaka);
    printf("姓名：%s\n", sanaka.name );
    printf("身高：%d\n", sanaka.height );
    printf("体重：%.1f\n", sanaka.weight );
    printf("奖学金：%ld\n", sanaka.schols );


    return 0;
}
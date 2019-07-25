#include <stdio.h>
#define Name_Len 64

typedef struct student {
    char name[Name_Len];
    int height;
    float weight;
    long schols;
} std;
void change(std * sd) {
    if (sd->height < 180)sd->height = 200;
    if (sd->weight > 100)sd->weight = 24;
}
int main(void) {
    std sanaka = {"sanaka", 175, 88.7, 123456789987654321};
    change(&sanaka);
    printf("姓名：%s\n", sanaka.name );
    printf("身高：%d\n", sanaka.height );
    printf("体重:%.1f\n", sanaka.weight );
    printf("奖学金：%ld\n", sanaka.schols );
    return 0;
}

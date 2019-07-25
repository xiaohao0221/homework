#include<stdio.h>
#include<math.h>

#define sqr(n)((n)*(n))
// 点坐标的结构体
typedef struct {
    double x;
    double y;

} point;
// 汽车结构体
typedef struct {
    point pos;
    // 当前位置，内嵌上一个结构体
    double fuel;
    // 剩余燃料
} car;

double distance(point a, point b) {
    return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));

}
void info(car c) {
    printf("(%.2f,%.2f)\n", c.pos.x, c.pos.y );
    printf("%.2f\n", c.fuel );
}

int move(car*c, point dest) {
    double d = distance(c->pos, dest);
    if (d > c->fuel)
        return 0;
    c->pos = dest;
    c->fuel -= d;
    return 1;
}

// ?
int main (void) {
    car mc = {{0.0, 0.0}, 90.0};
    while (1) {
        int select;
        point dest;
        info(mc);
        printf("开车么？【是---1/否---0】：");
        scanf("%d", &select);
        if (select == 0)break;
        printf("目的地坐标x："); scanf("%lf", &dest.x);
        printf("目的地坐标y："); scanf("%lf", &dest.y);
        if (!move(&mc, dest))
            // ?
            puts("燃料不足无法行驶。");
    }
    return 0;
}


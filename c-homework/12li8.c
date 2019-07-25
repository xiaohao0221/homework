// 计算两点之间的距离
#include<stdio.h>
#include<math.h>

#define sqr(n)((n)*(n))
typedef struct {
    double x;
    double y;

} point;

double distance_of(point a, point b) {
    return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));
}
int main(void) {
    point start, dest;
    printf("出发地x：" ); scanf("%lf", &start.x);
    printf("出发地y:" ); scanf("%lf", &start.y);
    printf("目的地x:"); scanf("%lf", &dest.x);
    printf("目的地y:"); scanf("%lf", &dest.y);

    printf("两点距离为%.2f\n", distance_of(start, dest) );
    return 0;
}
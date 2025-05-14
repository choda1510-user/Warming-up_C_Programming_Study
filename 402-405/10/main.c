#include <stdio.h>

typedef struct _point
{
    int x;
    int y;
} point;
typedef struct _rect
{
    point ld;
    point ru;
} rect;

void normalize_rect_points(rect *p);
point get_center_point(rect *p);
rect create_rect(int ldx, int ldy, int rux, int ruy);
void print_rect(rect *p);

int main(int argc, char *argv[])
{
    int i;
    int ldx, ldy, rux, ruy;
    rect rects[3];
    for (i = 0; i < 3; i++)
    {
        printf("left-bottom point(x,y): ");
        scanf("%d %d", &ldx, &ldy);
        printf("right-top point(x,y): ");
        scanf("%d %d", &rux, &ruy);
        rects[i] = create_rect(ldx, ldy, rux, ruy);
        print_rect(rects + i);
    }
    return 0;
}

void normalize_rect_points(rect *p)
{
    if (p->ld.x > p->ru.x)
    {
        int swap = p->ru.x;
        p->ru.x = p->ld.x;
        p->ld.x = swap;
    }
    if (p->ld.y > p->ru.y)
    {
        int swap = p->ru.y;
        p->ru.y = p->ld.y;
        p->ld.y = swap;
    }
}
point get_center_point(rect *p)
{
    point center;
    center.x = (p->ru.x + p->ld.x) / 2;
    center.y = (p->ru.y + p->ld.y) / 2;
    return center;
}
rect create_rect(int ldx, int ldy, int rux, int ruy)
{
    rect a;
    a.ld.x = ldx;
    a.ld.y = ldy;
    a.ru.x = rux;
    a.ru.y = ruy;
    normalize_rect_points(&a);
    return a;
}
void print_rect(rect *p)
{
    point center = get_center_point(p);
    printf("[RECT left-bottom point:(%d, %d) right-top point:(%d, %d)] Center Point: (%d, %d)\n", p->ld.x, p->ld.y, p->ru.x, p->ru.y, center.x, center.y);
}


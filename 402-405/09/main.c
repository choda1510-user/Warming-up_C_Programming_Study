#include <stdio.h>

typedef struct _point
{
    int x;
    int y;
} point;
typedef struct _rect
{
    point left_buttom;
    point right_top;
} rect;

void print_rect(rect *rect_ptr);

int main(int argc, char *argv[])
{
    int x, y;
    point lb, rt;
    rect rect1;
    printf("What is x, y of the rectangle's left-buttom point?");
    scanf("%d %d", &x, &y);
    lb.x = x;
    lb.y = y;
    printf("What is x, y of the rectangle's right-top point?");
    scanf("%d %d", &x, &y);
    rt.x = x;
    rt.y = y;
    rect1.left_buttom = lb;
    rect1.right_top = rt;
    print_rect(&rect1);
    return 0;
}

void print_rect(rect *rect_ptr)
{
    printf("[RECT left-buttom point:(%d, %d) right-top point(%d, %d)]\n", rect_ptr->left_buttom.x, rect_ptr->left_buttom.y, rect_ptr->right_top.x, rect_ptr->right_top.y);
}


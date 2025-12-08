#include<stdio.h>
int main()
{
    int x, y;
    if(scanf("%d %d", &x, &y)!=2) return 0;
    double h = sqrt((double)x * x + (double)y * y);
    printf("%.2f
", h);
    return 0;
}
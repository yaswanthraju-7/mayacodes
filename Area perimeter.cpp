#include<stdio.h>
int main()
{
    int radius;
    const float PI = 3.14;
    if(scanf("%d", &radius) !=1) return 1;
    float r = (float)radius;
    float area = PI * r * r;
    float perimeter = 2 * PI * r;
    printf("%.2f
",area);
    printf("%.2f
", perimeter);
    return 0;
}
#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X > Y)
    {
        int needed = X - Y;
        printf("%d
", needed);
    }
    else{
        printf("0
");
    }
    return 0;
}
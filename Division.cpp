#include<stdio.h>
int main()
{
    int num1, num2;
    if(scanf("%d %d", &num1, &num2) != 2)
    {
        return 1;
    }
    int result = num1 / num2;
    printf("%d
", result);
    return 0;

}
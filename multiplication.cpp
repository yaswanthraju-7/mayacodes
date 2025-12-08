#include<stdio.h>
int main()
{
     int num1, num2;
     if(scanf("%d", &num1) !=1) return 1;
     if(scanf("%d", &num2) !=1) return 1;
     int result = num1 * num2;
     printf("%d
", result);
     return 0;
}
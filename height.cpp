#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
   int h = x;
   if(y > h)
   h = y;
    printf("%d
", h);
    return 0;
}
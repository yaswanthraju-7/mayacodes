#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) 
{
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
 {
    int n;
    scanf("%d", &n);
    
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int dist_top = i;
            int dist_bottom = size - 1 - i;
            int dist_left = j;
            int dist_right = size - 1 - j;
            
            int min_dist = min(dist_top, min(dist_bottom, min(dist_left, dist_right)));
            
            int value = n - min_dist;
            
            printf("%d", value);
            
            if (j < size - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

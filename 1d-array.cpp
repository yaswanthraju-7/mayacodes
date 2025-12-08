#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int n;
    scanf("%d", &n);

    
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
     {
        
        if (scanf("%d", &arr[i]) != 1)
     {
            free(arr);
            return 1;
     }
        sum += arr[i];
    }
  printf("%lld\n", sum);
    free(arr);
    return 0;
}

    
    

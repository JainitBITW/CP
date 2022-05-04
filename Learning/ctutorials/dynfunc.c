#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    int *ptr;
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n ", ptr[i]);
    }

    ptr = (int *)realloc(ptr, (n+2) * sizeof(int));

    for (int i = 0; i < n+2 ; i++)
    {
        scanf("%d", &ptr[i]);
        printf("%d\n", ptr[i]);
    }
    free(ptr);
     for (int i = 0; i < n; i++)
    {
        printf("%d\n ", ptr[i]);
    }



    return 0;
}

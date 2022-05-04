#include <stdio.h>

void mario(int *a, int *b);
int main(void)

{
    int i, j, x, y;

    mario(&x, &y);

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void mario(int *a, int *b)

{

    printf("enter width");
    scanf("%d", &*b);

    printf("enter height");
    scanf("%d", &*a);
    
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char **argv)
{
    int a, b;

    scanf("%d %d", &a, &b);
    int x = 0;
    int ans;
    for (int i = 1; i <= 100000; i++)
    {
        int count = 0;
        int z = 1;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;

                if (i / j != j)
                    count++;
            }
        }
        if (count == b)
        {
            x++;
        }
        if (x == a)
        {
            ans = i;
            break;
        }
    }
    printf ( "%d", ans);

    return 0;
}
#include"include.h"

int main()
{
    char arr;
    int i, j;
    
    scanf("%d", &i);
    int comp=0, hum=0;

    for (int e = 0; e < i; e++)
    {
j = gen(3);
        scanf(" %c", &arr);

        switch (arr)
        {
        case 'r':
            if (j == 1)
            {
                printf(" rock \n tie\n");
            }
            else if (j == 2)
            {
                printf(" paper \nlose\n");
                comp++;
            }
            else
            {
                printf("scisor \n win\n");
                hum++;
            }
            break;

        case 'p':
            if (j == 1)
            {
                printf("rock \n win\n");
                hum++;
            }
            else if (j == 2)
            {
                printf("paper \n tie\n");
            }
            else
            {
                printf(" scisor \n lose\n");
                comp++;
            }
            break;

        case 's':
            if (j == 1)
            {
                printf("rock \n lose\n");
                comp++;
            }
            else if (j == 2)
            {

                printf("paper \n win\n");
                hum++;
            }
            else
            {
                printf(" scisor \n tie\n");
            }
            break;

        default:
            break;
        }
    }
    if (hum > comp)
    {
        printf("human wins \n");
    }
    else if (comp > hum)
    {
        printf("comp wins \n ");
    }
    else
    {
        printf("tie both \n");
    }
    return 0;
}
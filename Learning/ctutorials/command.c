#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char operation[20];
    int a, b;
    strcpy(operation, argv[1]);
    a = atoi(argv[2]);
    b = atoi(argv[3]);

    if (strcmp(operation, "add"))
    {
        printf("%d", a+b);
    }
    else if (strcmp(operation, "subtract"))
    {
        printf("%d", a-b);
    }

    else if (strcmp(operation, "multiply"))
    {
        printf("%d", a* b);
    }

    else if (strcmp(operation, "divide"))
    {
        printf("%d", a / b);
    }

    return 0;
}

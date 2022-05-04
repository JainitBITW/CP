#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[1000000];
    printf("Enter the string\n");
    scanf("%s",str);
    n = strlen(str);
    int i=0,j=0 ; 
    while(j <( n+1)/2)
    {
        if (str[i] == str[n-i-1])
        {
            i++;
        }
        j++;


    }
    if (i==(n+1)/2)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }

    return 0;
}

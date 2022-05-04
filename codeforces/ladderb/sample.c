#include <stdio.h>
#include <stdlib.h>
char array[100010];

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int n, m;

    scanf("%d %d ", &n, &m);
    scanf("%s", array);
    int maxi = -1;
    int alpha[26] = {};
    alpha[array[0] - 'a']++;

    for (int i = 0, j = 0; i < n && j < n;)

    {
        int count = 0;

        for (int z = 0; z < 26; z++)
            if (alpha[z])
                count++;

        if (count > m)
        {
            i++;
            alpha[array[j]-'a']--;
            j++;
            

        }
        else
        {
            maxi = max(maxi, i - j + 1);
            i++;
        }
        alpha[array[i]-'a']++;
    }

    printf("%d ", maxi);
    return 0;
}

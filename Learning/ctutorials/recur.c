#include <stdio.h>

int fic(  int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fic(n - 1) + fic(n - 2));
    }
}


int fick(int n)
{int a ,b;


a=0 ;
b=1;
for (int i =0;i<n-1;i++)
{
    b=a+b;
    a=b-a ;

}
return a ;

}

int main()
{
      int a;
    scanf("%d", &a);

    printf("%d\n", fick(a));

       printf("%d\n", fic(a));
    
    
}
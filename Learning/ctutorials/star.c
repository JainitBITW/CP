#include <stdio.h>


int star(int r )
{
    for (int i =0 ; i<r ; i++)
    {
        for (int j = 0 ; j<=2 ;j++)
        {
            printf("*");

        }
        printf("\n");
        
    }
}

int starr(int r )
{
     for (int i =r-1; i>=0 ; i--)
    {
        for (int j = i; j>= 0;j--)
        {
            printf("*");

        }
        printf("\n");
        
    }
}
int main ()

{
    while(1){
    int a , b ;
    scanf("%d",&a );

     if (a ==1 )
     { scanf("%d",&b );
         starr(b);

     }
   else  if (a==2)
     { scanf("%d",&b );
star(b);}
else {
    printf ("enter valid number ");

}

    }


}
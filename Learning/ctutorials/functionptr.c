#include <stdio.h>
#include<stdlib.h>

int sum(int a , int b)

{
    return a+b ;

}



int main ()
{
printf("%d \n", sum(3,1000)); 
int (*ftr)(int , int );
ftr= &sum ;
printf("%d ", *ftr(2,5));


    return 0; 
}
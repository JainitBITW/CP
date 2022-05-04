#include<stdio.h>
int pass(int array[])
{

    for (int i=0 ; i < 3 ; i ++)
    printf("%d ", array[i]);

//  *(array +1)=23;
array[1]= 123; 
return 0;

}

int main ()
{
    int a[]= { 1,3,4,5,5,5,5,5}; 
     pass(a);
         pass(a);
    return 0;
}

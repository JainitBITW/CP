#include <stdio.h>


struct fraction {
      int numerator;
      int denominator;
   };        


struct fraction **fpp, *fp, f = {2, 3};


int main()
{
    
    fp = &f; 
    fpp = &fp;
    
    printf("N = %d D = %d", *fpp->numerator, *fpp->denominator);


    return 0;
}
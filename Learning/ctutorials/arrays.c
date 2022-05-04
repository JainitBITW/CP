#include <stdio.h>

int main()

{
  int a;
  scanf("%d", &a);

  int num[a];

  for (int i = 0; i < a; i++)
  {
    printf("enter marks of roll no %d ", i + 1);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < a; i++)
  {
    printf("marks of roll no %d is %d \n ", i + 1, num[i]);
  }

}
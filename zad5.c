/* Obliczenie silnii przy pomocy pętli for */

#include <stdio.h>

int main()

{
  int i,a,silnia=1;
  printf("\n Podaj wartość: ");
  scanf("%d", &a);
  for(i=1; i<=a; i++)
    silnia=silnia*i;
  printf("\n %d! = %d\n", a, silnia);

  return 0;
}

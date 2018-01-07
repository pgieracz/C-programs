/* Program mowi czy cyfra jest parzysta czy nie oraz czy jest wieksza czy mniejsza od 0*/

#include <stdio.h>
int main()
{
  int x, y;
  printf("\n Wczytaj cyfre: ");
  scanf("%d", &x);
  if(x%2==0)
    if(x>0)
      printf("Liczba %d jest parzysta, większa od 0\n",x);
    else
      printf("liczba %d jest parzysta, mniejsza od 0\n",x);
  else
    if(x>0)
      printf("Liczba %d jest nieparzysta, większa od 0\n",x);
    else
      printf("Liczba %d jest nieparzysta, mniejsza od 0\n",x);

  return 0;
}

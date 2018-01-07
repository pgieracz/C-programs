/*proste uzycie funkcji if- sprawdzania znaku liczby*/
#include <stdio.h>
int main()
{

  int x;
  printf("\nPodaj liczbe: ");
  scanf("%d", &x);
  if(x>0)
    printf("\n Liczba  jest dodatnia\n");
  if(x<0)
    printf("\n Liczba  jest ujemna\n");

  return 0;
}

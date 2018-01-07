/*Program podający wynik dodawania, odejmowania, mnożenia i dzielenia podanych liczb */

#include <stdio.h>
main()
{
  int licz1, licz2, wynik;
  printf("Podaj liczby:");
    scanf("%d, %d", &licz1, &licz2);
  wynik=licz1+licz2;
  printf("\n%d + %d = %d", licz1, licz2, wynik);
  wynik=licz1-licz2;
  printf("\n%d - %d = %d", licz1, licz2, wynik);
  wynik=licz1*licz2;
  printf("\n%d*%d=%d", licz1, licz2, wynik);
  wynik=licz1/licz2;
  printf("\n%d:%d=%d\n",licz1, licz2, wynik);

  return 0;
}

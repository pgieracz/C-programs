/*sprawdzenie rownosci liczb*/

#include <stdio.h>
int main()
{
  int x,y;
  printf("Podaj liczbe x: \n");
  scanf("%d", &x);
    printf("Podaj liczbe y: \n");
  scanf("%d", &y);

  if(x==y)
    printf("Liczby są równe\n");
  else
    printf("Liczby nie są równe\n");

  return 0;
}

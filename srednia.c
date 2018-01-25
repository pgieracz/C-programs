#include <stdio.h>
#include <conio.h>
main()
{
int n;
double suma;
float liczba;

printf("Srednia wprowadzonych liczb\n");
printf("Wprowadz kolejne liczby, Ctrl Z lub F6 -koniec\n");;
for(n=0, suma=0;
scanf("%f",&liczba)==1;
suma += liczba, n++);
if(n==0)
printf("ciag pusty\n");
else
printf("liczba elementow = %5d "
" srednia = %lf\n",n,suma/n);
getch();
return 0;
}

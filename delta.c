#include <stdio.h>
#include <conio.h>
main (void)
{
float A,B,C,delta;

printf("Podaj wspolczynnik A: \n");
scanf("%f",&A);
printf("Podaj wspolczynnik B: \n");
scanf("%f",&B);
printf("Podaj wspolczynnik C: \n");
scanf("%f",&C);
delta=B*B-4*A*C;
if
(delta<0)
printf("Nie istnieja pierwiaski rzeczywiste!\n");
else
    if
(delta==0)
printf("Istnieje jeden pierwiastek rzeczywisty.\n");
else
printf("Istnieja dwa pierwiaski rzeczywiste.\n");
getch();
return 0 ;
}

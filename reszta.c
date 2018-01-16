#include <stdio.h>
main()
{
int reszta,dwudziestki, dziesiatki, piatki, zlotowki, r20, r10;
printf("Wprowadz reszte do wydania klientowi: ");
/* Wprowadzenie kwoty do wydania */
scanf("%d", &reszta);
dwudziestki= reszta/20;
/* banknoty 20-zlotowe */
r20=reszta % 20;
/* r20 reszta pozostała po 20-ch*/
dziesiatki= r20/10;
/* ilość banknotów 10-zlotowych*/
r10=r20 % 10;
/* r10 reprezentuje resztę po 10-ch */
piatki= r10 / 5;
/* banknoty 5-zlotowe */
zlotowki = r10 % 5;
/* reszta -zlotowki */
putchar('\n');
printf("By zwrocic %d reszty, wydaj banknoty: \n", reszta);
printf("%d dwudziestozlotowki\n", dwudziestki);
printf("%d dziesieciozlotowki\n", dziesiatki);
printf("%d pieciozlotowki \n", piatki);
printf("%d zlotowki (s)\n", zlotowki);

return 0;
}

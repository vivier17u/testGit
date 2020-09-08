#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int iHeures, iMinutes, iSecondes;

void affiche_heure(int h, int m, int s);

void main()
{
  iHeures= 4; iMinutes = 5; iSecondes = 6;
  affiche_heure(iHeures,iMinutes,iSecondes);
}

void affiche_heure(int h, int m, int s)
{
  printf("Il est %d heure",h);
  if (h>1) {printf("s");}
  printf(" %d minute",m);
  if (m>1) {printf("s");}
  printf(" %d secondeeeee ",s);
  if (s>1) {printf("s");}
}

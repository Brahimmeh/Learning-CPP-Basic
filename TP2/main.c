#include <stdio.h>
#include <stdlib.h>
#include "rationnel.h"


int main(int argc, char *argv[]) {
	
	
printf("\t \t Creation d'un rationnel 1\n");
rationnel a;
printf("Entrer le denominateur\n");
scanf("%d",&a.deumr);
printf("Entrer le numerateur\n");
scanf("%d",&a.numr);

printf("\n\n\t \t Affichage d'un rationnel 1\n");
Affchage (a);


printf("\n\n\t \t Affichage de l'inverse d'un rationnel 1\n");
rationnel d;
d=inver_rat (a);
Affchage (d);

printf("\n\n\t \t Affichage de l'approximation d'un rationnel 1\n");
printf("%.2f \n",Conv_reel(a));


printf("\n\n\t \t Affichage de la forme irreductible d'un rationnel 1\n");
a=forme_irr (a);
Affchage (a);


printf("\n\n\t \t Creation d'un rationnel 2\n");
rationnel b;
printf("Entrer le denominateur\n");
scanf("%d",&b.deumr);
printf("Entrer le numerateur\n");
scanf("%d",&b.numr);

printf("\n\n\t \t Affichage des 2 rationnels \n");
printf("Rationnel 1\n");
Affchage (a);
printf("Rationnel 2\n");
Affchage (b);



	return 0;
}

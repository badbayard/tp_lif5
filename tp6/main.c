#include <stdlib.h>
#include <stdio.h>
#include "Liste.h"
#include "ElementL.h"
#include "Arbre.h"
#include "ElementA.h"

int main ()
{
	Liste l;
	/*int a;
	ElementL meme;*/
	initialiserListe(&l);
	/*ajouterEnTeteListe(4,&l);
	ajouterEnTeteListe(3,&l);
	ajouterEnTeteListe(2,&l);
	ajouterEnTeteListe(7,&l);*/
	ajouterEnQueueListe(1,&l);
	ajouterEnQueueListe(2,&l);
	ajouterEnQueueListe(3,&l);
	ajouterEnQueueListe(4,&l);
	/*printf("choisir une case \n");
	scanf("%d",&a);
	meme=iemeElementListe(&l,a);
	printf("%d a la case %d",meme,a);*/
	afficherListeDroiteGauche(&l);
	testamentListe(&l);
	
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ElementA.h"
#include "Arbre.h"
#include "ElementL.h"
#include "Liste.h"
#include "File.h"
#include "ElementTD.h"

#define VALEUR_MAX 100000

int main ()
{
	int alea1,i;
	Arbre a;
	srand((unsigned) time(NULL));
	initialiserArbre(&a);

	for(i=0;i<100;i++)
	{
		alea1= rand()%(VALEUR_MAX + 1);
		insererElementArbre(alea1,&a);
	}

	afficherArbreParcoursInfixe(&a);
	testamentArbre(&a);
	printf("l'arbre apres le testaments\n");
	afficherArbreParcoursInfixe(&a);
	return 0;
}

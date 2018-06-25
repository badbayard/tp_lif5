#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{
	int jour;
	int mois;
	int annee;
};

int estanterieure (struct date d1, struct date d2)
{
	if(d1.annee <d2.annee)
		return 1;
		else if (d1.annee >d2.annee)
			return 0;
			else if (d1.mois < d2.mois)
				return 1;
				else if (d1.mois >d2.mois)
					return 0;
					else if (d1.jour < d2.jour)
						return 1;
						else
							return 0;

	
}


/*void remplirdate(struct date d1)
{
	printf("mettre le jour:\n");
	scanf("%d",&d1.jour);
	printf("mettre le mois:\n");
	scanf("%d",&d1.mois);
	printf("mettre l'annee\n");
	scanf("%d",&d1.annee);
}
*/					

		


int main ()
{
 struct	date * tab;
 struct date * tab2;
 int a;
 int taille;

	struct date d1,d2;
	d1.jour =17;
	d1


/*	printf("date:%d\n ", sizeof(struct date));*/
	printf("mettre une taille de tableau\n");
	scanf("%d",&taille);
	
  tab=malloc(taille*sizeof(struct date));
	tab2=malloc(taille*sizeof(struct date));
/*	remplirdate(d1);
	remplirdate(d2);*/
  a=estanterieure(d1,d2);	
	printf("%d\n",a);
	free(d1);
	free(d2);
	return 0;
}


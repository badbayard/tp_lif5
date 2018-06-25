#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct date
{
	int jour;
	int mois;
	int annee;
};

int estAnterieure (struct date d1, struct date d2);
void remplirAvecDesAleatoires (struct date tab[], int len);
void affiche(struct date tab[], int len);


int main()
{
	int a;
	struct date d1, d2;
	d1.jour = 17;
	d1.mois = 9;
	d1.annee = 1996;

	d2.jour = 26;
	d2.mois = 11;
	d2.annee = 1996;

	struct date * tab;
	int taille;
  srand (time(NULL));
	
	printf("Quelle taille  ?");
	scanf("%d", &taille);
	
	tab = malloc(taille * sizeof(struct date));	 

	/*printf("date en octets = %d\n", sizeof(struct date));*/
	
	a=estAnterieure(d1, d2);
	printf ("petite phrase sympa %d \n",a);
	remplirAvecDesAleatoires(tab,taille);
	affiche(

	return 0;
}


int estAnterieure (struct date d1, struct date d2)
{
	if(d1.annee < d2.annee)

			printf("1"); /*les printf doivent être mofidier par des return pour que le code soit un peu plus correcte car 1 et 0 pourront être assimiler a un booléen alors que "1" est une chaine de caractére qui a une valeur différente dans le code ascii que 1 */

	else if (d1.annee > d2.annee)

			return 0;   /*pareil*/

	else if(d1.mois < d2.mois)

			return 1;  /*pareil*/

	else if(d1.mois > d2.mois)

			return 0;  /*pareil*/

	else if(d1.jour < d2.jour) 

			return 1; /*pareil*/

	else

			return 0; /*pareil*/

 

}


int hasard(int max, int min)
{
	int a;
  a= rand()%max-min+1;
	return a;
}

void remplirAvecDesAleatoires (struct date tab[], int len)
{
	int i=0;

	/*srand(time(NULL));*/

	while(i<len)
	{
		tab[i].annee=hasard(1900,2016);
		tab[i].mois=hasard(1,12);
		if(tab[i].mois==2)
			tab[i].jour=hasard(1,28);
			else if(tab[i].mois == 4 || tab[i].mois ==6 || tab[i].mois == 9 || tab[i].mois == 11)
				tab[i].jour =hasard(1,30);
				else
					tab[i].jour = hasard(1,31);
					i++;
	}
}

void affiche(struct date tab[], int len)
{
	int i;
	for (i=0;i<len;i++)
	{
		printf("%2d/%2d/%4d\n",tab[i].jour,tab[i].mois,tab[i].annee);
	}
}

	




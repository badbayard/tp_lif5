#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct date 
{
	int jour ;
	int mois;
	int annee;
};

void affiche(struct date tab[],int taille);
void rempliraleatoire (FILE  *fichier, struct date tab[]);
void tri_selection (struct date tab[],int taille);
int estAnterieure (struct date d1, struct date d2);
void tri (struct date tab[], int taille);


int main ()
{
	struct date *tab;
	FILE *fichier;
	int taille;
  fichier	=fopen ("random.txt","r");
	fscanf(fichier,"#nbdates:%d\n",&taille);
	tab=malloc(taille*sizeof(struct date));
  rempliraleatoire(fichier,tab);
 	tri(tab,taille);
 /*	tri_selection(tab,taille);*/
	affiche(tab,taille);
	free(tab);
	
	return 0;

}


void rempliraleatoire (FILE  *fichier, struct date tab[])
{
	int i=0;
	while(fscanf(fichier,"%d / %d / %d",&tab[i].jour , &tab[i].mois, &tab[i].annee) ==3)
	{
		i++;	
	}

}

void affiche(struct date tab[],int taille)
{
	int i;

	for(i=0;i<taille;i++)
	{
		printf("% 2d / %2d / %4d\n",tab[i].jour, tab[i].mois,tab[i].annee);
	}
}

/* void tri_selection (struct date tab[],int taille)
{
	int i, j;
	int indmin;
	int min;
	for(i=0;i<taille-1;i++)
		{
			indmin=i;
			for (j=0;j<i+1;j++)
			{
				if (tab[j] < tab[indmin])
				{
					indmin=j;
				}
			}
		min=tab[indmin];
		tab[indmin]=tab[i];
		tab[i]=min;
		}
}*/

int estAnterieure (struct date d1, struct date d2)
{
	if(d1.annee < d2.annee)

			return 1;

	else if (d1.annee > d2.annee)

			return 0;

	else if(d1.mois < d2.mois)

		  return 1;

	else if(d1.mois > d2.mois)

			return 0;

	else if(d1.jour < d2.jour) 

			return 1;

	else

	 		return 0;

}

void tri (struct date tab[], int taille)
{
	int i=0;
	int j=0;
	int x=1;
	struct date tmp;
 while (j !=taille)
 {
	 i=0;
	while	(i !=taille-x)
	{
		if (estAnterieure(tab[i],tab[i+1])==0)
			{
				tmp.jour=tab[i].jour;
				tmp.mois=tab[i].mois;
				tmp.annee=tab[i].annee;
				tab[i].jour=tab[i+1].jour;
				tab[i].mois=tab[i+1].mois;
				tab[i].annee=tab[i+1].annee;
				tab[i+1].jour=tmp.jour;
				tab[i+1].mois=tmp.mois;
				tab[i+1].annee=tmp.annee;
			}
			i++;
		}
		x++;
		j++;
 }
}

void ecrit (struct date tab[])
{
	FILE *f	;
	f=fopen("toto.txt","w");
	fprintf(f, "%d / %d / %d :",&tab[i].jour,&tab[i].mois,&tab[i].annee);
}
		


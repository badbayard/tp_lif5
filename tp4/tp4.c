#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

typedef struct date
{
	int jour;
	int mois;
	int annee;
} date;

void echange(date *date1, date *date2);
int estAnterieure (const date d1, const date d2);
void afficherDate (date *tab, int taille);
void rempliraleatoire (FILE *fichier, date tab[]);
void ecrireDatesFichier(const char *fichier,const date *tab,const int taille);
void triParInsertion (date *tab,int taille);
void triParselection (date *tab,const int taille);
void trifusion (struct date *tab,int n);


int main()
{
	date *tab;
	FILE  *fichier;
	int taille;
	fichier =fopen("random.txt","r");
	fscanf(fichier,"#nbdates:%d\n",&taille);
	tab=malloc(taille*sizeof(date));
	rempliraleatoire(fichier,tab);
/*	trifusion(fichier,taille);*/
/*	triParInsertion(tab, taille);*/
/*	ecrireDatesFichier("./result.txt",tab,taille);*/
	afficherDate(tab,taille);
	free(tab);
		return 0;
}




void echange(date *date1, date *date2)
{
	date temp;
	temp=*date1;
	*date1=*date2;
	*date2=temp;

}

int estAnterieure (const date d1, const date d2)
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

void afficherDate (date *tab, int taille)
{
	int i;
	for (i=0;i<taille;i++)
	{
		printf ("%2d/ %2d / %d\n",tab[i].jour, tab[i].mois, tab[i].annee);
	}
}

void rempliraleatoire (FILE *fichier, date tab[])
{
	int i=0;
	while(fscanf(fichier,"%d / %d / %d",&tab[i].jour , &tab[i].mois, &tab[i].annee) ==3)
	{
		i++;
	}
}

void ecrireDatesFichier(const char *fichier,const date *tab,const int taille)
{
	int i;
	FILE *f=fopen(fichier, "w");

	if(f==NULL)
	{
		fprintf(f, "probleme d'affichage de %s\n",fichier);
		exit (EXIT_FAILURE);
	}

	fprintf (f, "#nbdates: %d\n", taille);

	for(i=0;i< taille;i++)
	{
		fprintf(f, "%2d / %2d / %4d\n",tab[i].jour, tab[i].mois,tab[i].annee);
	}
	fclose(f);
}

void triParInsertion (date *tab,int taille)
{
	int i,j;
	date tmp;
	for (i=1;i<taille;i++)
	{
		tmp=tab[i];
		j=i;
		while ((j>0)&&(estAnterieure(tmp, tab[j-1])))
		{
			tab[j]=tab[j-1];
			j--;
		}
		tab[j]=tmp;
	}
}

void triParselection (date *tab,const int taille)
{
	int min,i,j;
	for (i=0;i<taille;i++)
	{
		min=j;
		for(j=i;j<taille;j++)
		{
			if (estAnterieure(tab[j], tab[min]))
			{
				min=j;
			}
			echange(&tab[i], &tab[min]);
		}
	}
}





void trifusion (struct date *tab,int n)
{
	struct date *tmp1;
	int i,j,k,lg,debutmono1,debutmono2;
	int nbtraites1,nbtraites2;
	lg=1;
	
	while(lg<n)
	{
		tmp1=malloc(lg*sizeof(struct date));
	/*	tmp2=malloc(lg*sizeof(struct date));*/
		debutmono1=0;
		debutmono2=debutmono1+lg;
		
		while(debutmono2<n)
		{
			k=debutmono1;
			i=0;
			while(k<debutmono1+lg)
			{
				tmp1[i]=tab[k];
				k++;
				i++;
			}
			j=debutmono2;
			i=0;
			k=debutmono1;
			nbtraites1=0;
			nbtraites2=0;

			while( (nbtraites1<lg)&&(nbtraites2<lg)&&(j<n))
			{
				if(estAnterieure(tmp1[i],tab[j]))
				{
					tab[k]=tmp1[i];
					i++;
					nbtraites1++;
				}
				else
				{
					tab[k]=tab[j];
					j++;
					nbtraites2++;
				}
				k++;
			}
			if((nbtraites2==lg)||(j==n))
			{
				while(nbtraites1<lg)
				{
					tab[k]=tmp1[i];
					i++;
					k++;
					nbtraites1++;
				}
			}
			debutmono1+=2*lg;
			debutmono2+=2*lg;
		}
		free(tmp1);
		lg=lg*2;
	}
}


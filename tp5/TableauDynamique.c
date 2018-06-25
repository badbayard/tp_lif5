#include "TableauDynamique.h"
#include "ElementTD.h"
#include <stdlib.h>
#include <stdio.h>

void initialiserTabDyn(TableauDynamique *t)
{
	t->capacite=1;
	t->taille_utilisee=0;
	t->ad =(ElementTD *) malloc(sizeof(ElementTD));

}

void testamentTabDyn(TableauDynamique *t)
{
	t->capacite=0;
	t->taille_utilisee=0;
	free(t->ad);
}

void ajouterElementTabDyn(TableauDynamique *t,ElementTD e)
{
	int i;

	if (t->capacite == t->taille_utilisee)
	{
		ElementTD * temp = t->ad;
		t->ad = (ElementTD *) malloc (sizeof(ElementTD)* t->capacite *2);
		for (i=0;i< t->capacite; i++)
		{
			t->ad[i]=temp[i];
		}
		free(temp);
		t->capacite *=2;
	}
	t->ad[t->taille_utilisee]=e;
	t->taille_utilisee++;
}

ElementTD valeurIemeElementTabDyn(const TableauDynamique *t, unsigned int i)
{
	return t->ad[i];
}

void modifierValeurIemeElementTabDyn(TableauDynamique *t,ElementTD e,unsigned int i)
{
	t->ad[i]=e;
}

void afficherTabDyn(const TableauDynamique *t)
{
	int i;
		for (i=0; i <t-> taille_utilisee; i++)
	{
		printf("Element %d : %d\n", i,t->ad[i]);
	}
}

void supprimerElement(TableauDynamique *t, int position)
{
	int i,j;
	ElementTD * temp;
	for(i=position;position<t->taille_utilisee;i++)
	{
		t->ad[i]=t->ad[i+1];
		t->taille_utilisee--;
	}
		if (t->taille_utilisee < (t->capacite /3)) 
		{
			t->capacite/=2;
			temp=t->ad;
			t->ad =(ElementTD *) malloc (sizeof(ElementTD) *t->capacite);
			for(j=0; j<t->capacite;i++)
			{
				t->ad[j]=temp[i];
			}
			free(temp);
		}
}





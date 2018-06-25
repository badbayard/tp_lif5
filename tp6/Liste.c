#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"
#include "ElementL.h"


void initialiserListe(Liste * l)
{
	l->prem=NULL;
	l->last=NULL;
}

void ajouterEnTeteListe(ElementL e,Liste *l)
{
	Cellule *p=(Cellule *)malloc(sizeof(Cellule));
	p->info=e;
	p->suivant=l->prem;
	p->precedent=NULL;
	l->prem=p;
	if(l->last ==NULL)
	{
		l->last=p;
	}
	
}


void  ajouterEnQueueListe(ElementL e, Liste *l)
{
	Cellule *p=(Cellule *)malloc(sizeof(Cellule));
	p->info=e;
	p->suivant=NULL;
	p->precedent =l->last;
	if(l->prem==NULL)
	{
		l->prem=p;
	}
	else
	{
		(l->last)->suivant=p;
	}
	l->last=p;

}




int estVideListe(const Liste *l)
{
	return (l->prem !=NULL);
}


ElementL iemeElementListe(const Liste *l,unsigned int i)
{
	Cellule *temp =(Cellule *)malloc(sizeof(Cellule));
	temp =l->prem;
	while(--i >0)
	{
		temp=temp->suivant;
	}
	return temp->info;
}

void modifierIemeElementListe(const Liste *l, unsigned int i, ElementL e)
{
	Cellule *temp=(Cellule *)malloc(sizeof(Cellule));
	temp=l->prem;
	while(--i >0)
	{
		temp=temp->suivant;
	}
	temp->info=e;
	if(temp->suivant !=NULL)
		temp->suivant->precedent=temp;
	if(temp->precedent !=NULL)
		temp->precedent->suivant =temp;
}

void afficherListeGaucheDroite(const Liste *l)
{
	Cellule*temp=l->prem;
	int i=0;
	while (temp !=NULL)
	{
		printf("ELEMENT %d :", i);
		afficherElementL(temp->info);
		temp=temp->suivant;
		i++;
	}
}

void afficherListeDroiteGauche(const Liste *l)
{
	Cellule * temp=l->last;
	int i;
	while (temp !=NULL)
			{
				printf("Element %d : ",i);
				afficherElementL(temp->info);
				temp=temp->suivant;
				i++;
			}
}

void supprimerTeteListe(Liste *l)
{
	if(l->prem->suivant !=NULL)
		l->prem->suivant->precedent =NULL;
		free(l->prem);
}

void viderListe(Liste * l)
{
	Cellule *temp=l->prem;
	Cellule *tempsuivant;
	if(!temp) return;
	do
	{
		tempsuivant=temp->suivant;
		free(temp);
		temp=NULL;
		temp=tempsuivant;
	}while(temp !=NULL);
}

void testamentListe(Liste * l)
{
	viderListe(l);
}

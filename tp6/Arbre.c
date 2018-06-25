#include <stdlib.h>
#include <stdio.h>
#include "Arbre.h"

void initialiserArbre(Arbre *A)
{
	A->nbElemDansArbre =0;
	A->adRacine=NULL;
}

  


static int insertionAPartirDeCellule(ElementA e,Noeud **N)
{
	if (*N==NULL){
		*N=(Noeud*) malloc(sizeof(Noeud));
		(*N)->info = e;
		(*N)->fg = NULL;
		(*N)->fd =NULL;
		return 1;
	}
	if (e != (*N)->info) {
		if (e < (*N)->info) insertionAPartirDeCellule(e, &(*N)->fg);
		else insertionAPartirDeCellule(e, &(*N)->fd);
	}
	return 0;

}

void  insererElementArbre(ElementA e, Arbre *A)
{
	if(insertionAPartirDeCellule(e, &A->adRacine)) A->nbElemDansArbre++;
}

static void parcoursNoeudInfixe(const Noeud * N)
{
	if (N==NULL);
	else {
		parcoursNoeudInfixe(N->fg);
		afficherElementA(N->info);
		parcoursNoeudInfixe(N->fd);
	}
}

void afficherArbreParcoursInfixe(const Arbre * A)
{
	parcoursNoeudInfixe(A->adRacine);
}

static void rechercherElementNoeuds(ElementA e,const Noeud * N,int * trouve, int *nb_visites)
{
	if(N == NULL){
		*trouve=0;
		} else if (N->info ==e) {
			*trouve = 1;
		} else {
			*nb_visites += 1;
			if (e< N->info) rechercherElementNoeuds(e,N->fg, trouve,nb_visites);
			else rechercherElementNoeuds(e, N->fd, trouve,nb_visites);
		}
}

void rechercherElementArbre(ElementA e, const Arbre *A, int * trouve, int * nb_visites)
{
	*nb_visites = 1;
	rechercherElementNoeuds(e, A->adRacine, trouve, nb_visites);
}



	static void testamentNoeuds(Noeud * N)
	{
		if (N == NULL)
		{
			;
		}else{
			testamentNoeuds(N->fg);
			testamentNoeuds(N->fd);
			free(N);
			N = NULL;
		}
	}

void testamentArbre(Arbre *A)
{
	testamentNoeuds(A->adRacine);
	A->nbElemDansArbre =0;
}


int hauteurBis(Noeud *n)
{
	int x1,x2,h;
	if (n==NULL) return -1;
	x1=hauteurBis(n->fg);
	x2=hauteurBis(n->fd);
	h=x1;
	if (x2>x1)
		h=x2;
		return h+1;
}

int hauteurArbre(const Arbre *A)
{
	return hauteurBis(A->adRacine);
}


#ifndef _LISTE
#define _LISTE

#include "ElementL.h" 

struct sCellule
{
  ElementL info;
  struct sCellule *suivant;
  struct sCellule *precedent;
};
typedef struct sCellule Cellule;


struct sListe
{
  Cellule *prem;
  Cellule *last;
};
typedef struct sListe Liste;


void initialiserListe(Liste * l);
/* Precondition : l non prealablement initialisee
   Postcondition : la liste l initialisee est vide */

int estVideListe(const Liste * l);
/* Precondition : l prealablement initialisee et manipulee uniquement
                  a travers les operations du module
   Resultat : 1 si l est vide, 0 sinon */

unsigned int nbElementsListe(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Resultat : nombre d'elements contenus dans la liste */


ElementL iemeElementListe(const Liste * l, unsigned int i);
/* Precondition : l n'est pas vide, et 0 <= i < nbElementsListe(l)
   Resultat : valeur du i-eme element de la liste, sachant que les
   elements sont numerotes a partir de 0 */

void modfierIemeElementListe(const Liste * l, unsigned int i, ElementL e);
/* Precondition : l n'est pas vide, et 0 <= i < nbElementsListe(l)
   Postcondition : e remplace le i-eme element de la liste, sachant que les
   elements sont numerotes a partir de 0 */


Cellule * premiereCelluleListe(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Resultat : adresse de la cellule du premier element si l non vide,
              NULL sinon
   Attention : la liste l pourra ensuite etre modifiee a travers la 
   connaissance de l'adresse de sa premiere cellule */


Cellule * celluleSuivanteListe(const Cellule *c, const Liste * l);
/* Precondition : c adresse valide d'une Cellule de la Liste l
   Resultat : adresse de la cellule suivante si elle existe, NULL sinon
   Attention : la liste l pourra ensuite etre modifiee a travers la 
   connaissance de l'adresse d'une de ses cellules */


void afficherListeGaucheDroite(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Postcondition : Affichage de tous les elements de l, en commencant
   par le premier */

void afficherListeDroiteGauche(const Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
                  operations du module
   Postcondition : Affichage de tous les elements de l, en commencant
   par le dernier */

void ajouterEnTeteListe(ElementL e,Liste * l);
/* Precondition : l et e initialises et manipules uniquement a travers les 
                  operations de leurs modules respectifs
   Postcondition : e est ajoute en tete de l */

void ajouterEnQueueListe(ElementL e, Liste * l);
/* Precondition : l et e initialises et manipules uniquement a travers les 
                  operations de leurs modules respectifs 
   Postcondition : e est ajoute en fin de la liste l */

void supprimerTeteListe(Liste * l);
/* Precondition : l n'est pas vide
   Postcondition : la liste l perd son premier element */


void viderListe(Liste * l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
   operations du module
   Postcondition : l ne contient plus acune cellule */

void testamentListe(Liste * l);
/* Precondition : l prealablement initialisee et manipulee uniquement
   a travers les operations du module
   Postcondition : l prete a etre detruite */


void affecterListe(Liste * l1, const Liste * l2);
/* Precondition : l1 et l2 prealablement initialisees et manipulees uniquement
                  a travers les operations du module
   Postcondition : la liste l1 correspond a une copie de l2 
   (mais les 2 listes sont totalement independantes l'une de l'autre) */


int rechercherElementListe(ElementL e, const Liste *l);
/* Precondition : l initialisee et manipulee uniquement a travers les 
   operations du module
   Resultat : Position de la premiere occurrence de e dans la liste (en
   partant de la gauche), -1 si e n'est pas dans la liste. Les cellules 
   sont numerotees de 0 a n-1, donc une valeur de retour egale a 0 
   signifie sue la premiere occurrence de e se trouve dans la premiere
   cellule de la liste. */


void insererElementListe(ElementL e, Liste * l, unsigned int position);
/* Preconditions : l initialisee et manipulee uniquement a travers les 
   operations du module, 0 <= position <= nbElements(l)
   Postconditions : une copie independante de e est inseree de sorte a 
   ce qu'elle occupe la position indiquee dans la liste l (les positions 
   etant numerotees a partir de 0).*/ 





#endif

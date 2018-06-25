#ifndef _PILE
#define _PILE

#include "TableauDynamique.h"

typedef TableauDynamique Pile;


void initialiserPile(Pile * P);
/* Precondition : *P non prealablement initialisee
   Postcondition : *P initialisee en pile vide */

void testamentPile(Pile * P);
/* Precondition : *P prealablement initialisee
   Postcondition : *P prete a disparaitre (ne doit plus etre utilisee) */

void affecterPile(Pile *P1, const Pile * P2);
/* Precondition : *P1 et *P2 initialisees
   Postcondition : *P1 et *P2 correspondent a des piles identiques 
   mais independantes */

void empilerPile(Pile * P, void * adr);
/* Precondition : *P initialisee
   Postcondition : le sommet de *P est une copie de adr */

void depilerPile(Pile * P);
/* Precondition : *P initialisee, *P non vide
   Postcondition : le sommet de *P est depile ("last in, first out") */

void * consulterSommetPile(const Pile * P);
/* Precondition : *P non vide
   Resultat : le sommet de *P ("last in")*/

int testPileVide(const Pile * P);
/* Precondition : *P initialisee
   Resultat : 1 si *P est vide, 0 sinon */

void afficherPile(const Pile * P);
/* Precondition : P initialisee
   Resultat : les adresses contenues de la pile sont affiches a l'ecran,
   en hexadécimal, en commencant par la base de la pile (le sommet est
   affiché en dernier)
*/


#endif

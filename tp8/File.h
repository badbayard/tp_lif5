#ifndef _FILE
#define _FILE


#include "Liste.h" 
                   

typedef Liste File;


void initialiserFile(File * F);
/* Precondition : *pF non prealablement initialisee
   Postcondition : *pF initialisee en file vide */


void testamentFile(File * F);
/* Precondition : *F prealablement initialisee
   Postcondition : *F prete a disparaitre (ne doit plus etre utilisee) */

void affecterFile(File * F1, const File * F2);
/* Precondition : *F1 et F2 initialisees
   Postcondition : *F1 et F2 correspondent a des Files identiques 
   mais independantes  */

unsigned int nbElementsFile(const File * F);
/* Precondition : F initialisee
   Resultat : retourne le nombre d'items presents dans la file F */

void enfilerFile(File * F, void * adr);
/* Precondition : *F et e prealablement initialises
   Postcondition : adr ajoutee en fin de file */

void defilerFile(File * F);
/* Precondition : *F initialisee et non vide
   Postcondition : l'element de tete de *F est supprime ("first in, 
   first out") */

void * premierDeLaFile(const File * F);
/* Precondition : F initialisee et non vide
   Resultat : l'adresse qui se trouve en tete de f ("first in") */

int testFileVide(const File * F);
/* Precondition : F initialisee
   Resultat : 1 si F est vide, 0 sinon */


#endif

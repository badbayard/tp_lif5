#ifndef _ELEMENT_L
#define _ELEMENT_L


typedef int ElementL;

void afficherElementL(ElementL e);

int estEgalElementL(ElementL e1, ElementL e2);
/* Preconditions : aucune
   Resultat : renvoie 1 si e1 est egal a e2, 0 sinon */

int estInferieurElementL(ElementL e1, ElementL e2);
/* Preconditions : aucune
   Resultat : renvoie 1 si e1 est strictement inferieur a e2, 0 sinon */


#endif

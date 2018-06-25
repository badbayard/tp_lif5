#ifndef _ELEMENT_A
#define _ELEMENT_A

typedef int ElementA;

void afficherElementA(ElementA e);
/* Preconditions : aucune
   Postconditions : e est affiche a l'ecran sans retour a la ligne
*/

int estInferieurElementA(ElementA e1, ElementA e2);
/* Preconditions : aucune
   Resultat : 1 si e1 < e2, 0 sinon */


int estSuperieurElementA(ElementA e1, ElementA e2);
/* Preconditions : aucune
   Resultat : 1 si e1 > e2, 0 sinon */

int estSuperieurOuEgalElementA(ElementA e1, ElementA e2);
/* Preconditions : aucune
   Resultat : 1 si e1 >= e2, 0 sinon */

int estEgalElementA(ElementA e1, ElementA e2);
/* Preconditions : aucune
   Resultat : 1 si e1 == e2, 0 sinon */



#endif

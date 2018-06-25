
#ifndef _TAB_DYN
#define _TAB_DYN

#include "ElementTD.h" 



struct sTableauDynamique
{
  /*   donnees membres  */
  /*   (ne sont pas censees etre connues par l'utilisateur d'un module :  */
  /*   SI ON AVAIT PU NE PAS LES FAIRE FIGURER DANS L'INTERFACE, 
       on l'aurait fait!) */
  unsigned int capacite;
  unsigned int taille_utilisee;
  ElementTD * ad;
};
typedef struct sTableauDynamique TableauDynamique;


void initialiserTabDyn(TableauDynamique * t); 
/* Precondition : t non prealablement initialise */
/* Postcondition : t initialise a une alveole vide (taille utilisee nulle) */


void testamentTabDyn(TableauDynamique *t);
/* Precondition : t prealablement initialise */
/* Postcondition : t pret a disparaitre. La memoire allouee dynamiquement
   est liberee. On ne pourra plus appeler les sous-programmes qui
   necessitent que t soit initialise. */


void affecterTabDyn(TableauDynamique *t1, const TableauDynamique *t2);
/* Precondition : t1 et t2 initialises */
/* Postcondition : l'ancien contenu de t1 est perdu. t1 et t2 contiennent 
   des sequences d'ElementTD identiques (t1 correspond a une copie de t2, 
   les 2 tableaux ont meme capacite, meme taille utilisee, mais sont 
   independants) */

unsigned int tailleUtiliseeTabDyn(const TableauDynamique *t);
/* Precondition : t prealablement initialise */
/* Resultat : nombre d'ElementTDs stockes dans t */


ElementTD valeurIemeElementTabDyn(const TableauDynamique *t, unsigned int i);
/* Precondition : t prealablement initialise, 0 <= i < tailleUtilisee(t) */
/* Resultat : retourne le i+1eme ElementTD de t */


void afficherTabDyn(const TableauDynamique *t);
/* Precondition : t prealablement initialise */
/* Postcondition : Les elements du tableau sont affiches sur la sortie
   standard en utilisant la procedure d'affichage definie dans le module
   ElementTD. */


void ajouterElementTabDyn(TableauDynamique *t, ElementTD e);
/* Precondition : t prealablement initialise */
/* Postcondition : L'element e est ajoute dans la premiere alveole inutilisee 
   du tableau, la taille utilisee est incrementee de 1. Doublement de la 
   capacite de t, si necessaire. */


void supprimerElementTabDyn( TableauDynamique *t, int position );
/* Precondition : t prealablement initialise et non vide, et 0 <= position <= t->taille_utilisee - 1 */
/* Postcondition : la taille utilisee du tableau est decrementee de 1. Si   
   tailleUtilisee < capacite/3, alors on divise la capacité par 2. */


void modifierValeurIemeElementTabDyn(TableauDynamique *t, ElementTD e, unsigned int i);
/* Precondition : t prealablement initialise et 0 <= i < tailleUtilisee(t) */
/* Postcondition : le i+1eme ElementTD de t vaut e */


void insererElementTabDyn(TableauDynamique *t, ElementTD e, unsigned int i);
/* Precondition : t prealablement initialise et 0 <= i < tailleUtilisee(t) */
/* Postcondition : e est insere en i+1eme position et tailleUtilisee est incrementee de 1 */

void trierTabDyn(TableauDynamique *t) ;
/* Precondition : t prealablement initialise */
/* Postcondition : t est trie dans l'ordre croissant */


int rechercherElementTabDyn(const TableauDynamique *t, ElementTD e);
/* Precondition : t prealablement initialise et trie dans l'ordre 
   croissant */
/* Resultat : numero de l'alveole (ou l'une des alveoles) qui contient un 
   ElementTD egal a e, ou bien -1 si t ne contient pas d'element egal a e */


#endif

#include <stdio.h> 
#include "ElementL.h"

void afficherElementL(ElementL e)
{
  printf("%d\n", e);
}


int estEgalElementL(ElementL e1, ElementL e2)
{
  if (e1 == e2) return 1;
  else return 0;
}



int estInferieurElementL(ElementL e1, ElementL e2)
{
  if (e1 < e2) return 1;
  else return 0;
}

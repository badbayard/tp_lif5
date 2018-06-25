#include <stdio.h>  
#include "ElementA.h"



void afficherElementA(ElementA e)
{
  printf("%d ", e);
}


int estInferieurElementA(ElementA e1, ElementA e2)
{
  if (e1 < e2) return 1;
  else return 0;
}

int estSuperieurElementA(ElementA e1, ElementA e2)
{
  if (e1 > e2) return 1;
  else return 0;
}

int estSuperieurOuEgalElementA(ElementA e1, ElementA e2)
{
  if (e1 >= e2) return 1;
  else return 0;
}


int estEgalElementA(ElementA e1, ElementA e2)
{
  if (e1 == e2) return 1;
  else return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	
	int n;
	int i;
	int j;
	float *tab;
  printf(" mettre une taille de tableaux\n");

	scanf("%d",&n);
	tab =(float *)  malloc(sizeof(float)* n);;
	printf("mettre des valeurs dans le tableau");
	for (i=0;i<n;i++)
	{
		scanf("%f",&tab[i]);
	}
	
	for(j=0;j<n;j++)
		{
			printf("%.0f\n",tab[j]);
		}
		free(tab);
return 0;

}

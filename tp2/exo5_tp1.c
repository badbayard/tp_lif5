#include <stdio.h>

int maxi(int t[], int taille);


int main ()
{
	int tab1[]={2,4,5,6,3};
	int tab2[]={2,0,5,8,5,8,6,9};
	int tab3[]={2,5,8,6,5,9,5,6,87,98,54,32,65,87};
	int i;

	printf("adresse de %lu\n ",(unsigned long  int) tab1); /*&tab[0]*/
		printf("adresse de %lu\n ",(unsigned long  int) tab2);
	printf("adresse de %lu\n ",(unsigned long  int) tab3); 	 

	int max1=maxi(tab1,5);
	int max2=maxi(tab2,8);
	int max3=maxi(tab3,14);
	printf("le chiffre maximum du tableau tab1 est %d \n pour tab2 %d \n pour tab3 %d \n",max1,max2,max3);
	

/*	for (i=0;i<14;i++)
		{
			printf("%d \n",tab3[i]);
		}
*/
		return 0;

}

int maxi(int t[], int taille)
{
	int max=t[0];
	int i;
	for(i=0;i<taille;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
		}
	}
	return max;
}

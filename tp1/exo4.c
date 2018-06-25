#include <stdio.h>

float aire( float rayon )
{
	float aire;
	float pi=3.14;
	aire=pi*rayon*rayon;
	return aire;
}


int main ()
{
	float rayon ;
	float a;
	printf("mettre l'aire du cercle \n");
	scanf("%f",&rayon);
  a=aire(rayon);
	printf("l'aire du cercle est %f \n",a);
	return 0;

}


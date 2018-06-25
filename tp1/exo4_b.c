#include <stdio.h>

void permutation (int *a, int *b, int *c)
{
	int tampon;
	tampon=*a;
	*a=*c;
	*c=*b;
	*b=tampon;
}

void euclid (float v1, float v2, float *q, float *r)
{
	*q=0;
	*r=v1;
	while(v1 <= v2)
	{
		*q=*q+1;
		*r=*r-v2;
	}
}

int maxi(int t[])
{
	int max=t[0];
	int i;

	for(i=0;i<8;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
		}
	}
		return max;
		}

int main ()
{
 	int i,j,k;
	int tab1[]={4,5,5,3,4};
	int tab2[]={4,5,7,8,2,9,5,8};
	int tab3[]={4,6,8,3,9,4,7,5,9,1,5,7,4,8};
	/*for(i=0;i<5;i++)
	{
		printf(" %d",tab1[i]);
	}
	*/
	
	k=maxi(tab2);
	printf("le max est %d",k);



	/*int a=2;
	int b=3;
	int c=7;
	permutation(&a,&b,&c);
	printf("a=%d b=%d c=%d",a,b,c);
	*/

	return 0;

}

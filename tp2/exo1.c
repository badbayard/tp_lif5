#include <stdio.h>

int comb(int n, int p)
{
	int tmp1, tmp2;
	printf ("calcule du nb de combinaisons de %d elts parmi %d\n",p,n);
	if ((p==0) || (n==p))
	{
		return 1;
	}
	tmp1=comb(n-1,p-1);
	tmp2=comb(n-1,p);
	return tmp1+tmp2;
}


int main ()
{
	int c;
	c=comb(4,3);
	printf("c vaut %d \n",c);

	return 0;	
	
}

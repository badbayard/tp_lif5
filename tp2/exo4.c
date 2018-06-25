#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crypter (char texte[], char cle[],char result[])
{
	int i=0;
  int j=0;
	while(texte[i]!='\0')
		{
			if((texte[i]>='a')&&(texte[i]<='z'))
			{
		  	result[i]=((texte[i]+cle[j]-2*'a')%26)+'a';
					j++;
			}
			else if ((texte[i]>='A')&&(texte[i]<='Z'))
			{
			 result[i]=((texte[i]+cle[j]-2*'A')%26)+'A';
			 j++;
		 }
		 else 
		 {
			 result[i]=texte[i];
		 }
		 if (cle[j]=='\0')
		 {
			 j=0;
		 }
		 i++;
		}
}

char* crypter2 (char texte[],char cle[])
{
	char *result=(char*) malloc(sizeof(char*) * strlen(texte));	
	crypter(texte,cle,result);
	
	return result;
}

void  crypter3 (char texte[], char cle[],char** result)
{
	*result = (char*) malloc(sizeof(char*) * strlen(texte));
 	crypter(texte,cle,*result);
}


int main ()
{
	char *texte="cherchez au pied de l'arbre";
	char *cle="indice";
	char*result;
/*	char *result= (char*) malloc(sizeof(char*) *	strlen(texte));*/
  /*	crypter(texte,cle,result);*/
 /* char*	result= crypter2(texte,cle);*/
 
 crypter3(texte,cle,&result);
	printf("%s\n",texte);
	printf("%s\n ",result);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct compte
{
	int num;
	char nom[50];
	float solde;
	struct compte* suivant;
	
}compte, *liste;
 

liste AjoutFin(int numC, char* nomP, float solde, liste l)
{
	liste l1=(compte*)malloc(sizeof(compte));
	l1->num=numC;
	l1->solde=solde;
	strcpy(l1->nom,nomP);
	l1->suivant=NULL;
	
	if(l==NULL)
	return l1;
	
	else
	{
		liste l2=l;
		
		while(l2->suivant!=NULL)
		l2=l2->suivant;
		
		l2->suivant=l1;
		
		return l;
	}
}

void AffListe (liste l)
{
	if(l==NULL)
	printf("NUll \n");
	
	else
	{
		printf("Num du compte: %d \n",l->num);
		printf("Nom du compte: %s \n",l->nom);
		printf("Solde du compte: %.2f \n",l->solde);
		
		return AffListe (l->suivant);	
	}
	

}


liste SuppCompte(liste l)
{
	liste l1=l,l2;
	
	if(l1==NULL)
     return l1;
	 
	 	
	if(l->num %2 != 0)
	{
		l=l->suivant;
		free(l1);
		//return l;
	}
	
	while(l1->suivant != NULL)
	{
		if(l1->suivant->num %2 != 0)
		{
			l2=l1->suivant;
			l1->suivant=l2->suivant;
			free(l2);
			
		}
		l1=l1->suivant;
	}
	
	return l;
	
}



int CalcNbrCompte(liste l, int soldeLimite)
{
	int cmpt=0;
	
	while (l!=NULL)
	{
		if(l->solde > soldeLimite)
		cmpt++;
		l=l->suivant;
	}
	
	return cmpt;
}

liste CompteNonVide (liste l)
{
	liste l1=NULL;
	
    while(l!=NULL)
    {
    	if(l->solde > 0)
    	l1=AjoutFin(l->num,l->nom,l->solde,l1);
    	
    	l=l->suivant;
	}
	
	return l1;
}

main()
{
	liste l=NULL;
	
	l=AjoutFin(01,"AAA",10,l);
	l=AjoutFin(02,"BBB",1,l);
	l=AjoutFin(03,"CCC",-1,l);
	l=AjoutFin(04,"DDD",34,l);
	l=AjoutFin(05,"EEE",51,l);
	l=AjoutFin(06,"FFF",100,l);
	
	AffListe (l);
	
	l=SuppCompte(l);
	printf("apres supp \n");
	AffListe (l);
	
	printf("num compt sup a 10 est %d \n",CalcNbrCompte(l,10));
	
	liste l1;
	l1=CompteNonVide (l);
	l=AjoutFin(03,"CCC",-1,l);
	l=AjoutFin(03,"CCC",0,l);
	AffListe (l);
	
}

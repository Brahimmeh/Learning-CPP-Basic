#include<stdio.h>
#include<stdlib.h>

typedef struct personne
{
	char nom[20],prenom[20];
	int age;
}personne;

main()
{
	personne T[20];
	
	int i,j,n;
	n=5;
	
	for (i=0;i<n;i++)
	{
		printf("entrer le nom de la personne n %d \n",i);
		fflush(stdin);
		gets(T[i].nom);
		printf("entrer le prenom de la personne n %d \n",i);
		fflush(stdin);
		gets(T[i].prenom);
		printf("entrer l'age de la personne n %d \n",i);
		scanf("%d",&T[i].age);
		
	}
	
	for(i=0;i<n;i++)
	{
		if(T[i].age>=20)
		{
			for(j=i;j<n;j++)
			{
				T[j]=T[j+1];
			}
			n--;
		
		}
	}
	
	
		for (i=0;i<n;i++)
	{
		printf("le nom de la personne n %d : %s \n",i,T[i].nom);
		printf("le prenom de la personne n %d : %s \n",i,T[i].prenom);
		printf("l'age de la personne n %d : %d \n",i,T[i].age);
		
	}
}

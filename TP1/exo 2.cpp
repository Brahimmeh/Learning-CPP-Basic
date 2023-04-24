#include<stdio.h>
#include<stdlib.h>

int* Remplir (int* t, int n)
{
	int* p=t;
	
	for(p=t;p<t+n;p++)
	{
		printf("enter the value T[%d] : \n",p-t);
		scanf("%d",p);
	}
	
	return t;
}

void Affiche (int*t, int n)
{
	int* p=t;
	
	for(p=t;p<t+n;p++)
	printf("T[%d] = %d \n",p-t,*p);
	
}

int* Inserer (int* t, int *n, int m)
{
	int* p=t;
	
	for(p=t;p<t+(*n);p++);
	printf("enter the value T[%d] \n",p-t);
	scanf("%d",p);
	
	(*n)++;
	
	return t;

}

main()
{
	int* t;
	t=(int*)malloc(6*sizeof(int));
    int* n;
    n=(int*)malloc(sizeof(int));
    (*n)= 6;
	
	t=Remplir(t,*n);
	Affiche (t,*n);
	t=Inserer (t,n,6);
	Affiche (t,*n);
}

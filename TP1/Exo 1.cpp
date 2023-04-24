#include<stdio.h>
#include<stdlib.h>
main()
{
	int* t;
	t=(int*)malloc(5*sizeof(int));
	int som =0;
	
	int* p;
	p=t;
	for(p=t;p<t+5;p++)
	{
		printf("entrer la valeur T[%d] : \n",p-t);
		scanf("%d",p);
		som += *p;
	}
	
	
		for(p=t;p<t+5;p++)
	{
		printf("T[%d] =%d \n",p-t,*p);
		
	}
	
	printf("la somme est : %d \n",som);
	
}

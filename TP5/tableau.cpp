#include<iostream>
#include<cstdlib>
#include "tableau.h"

using namespace std;

tableau initialiser ()
{
	tableau t;
	cout<<"entrer la taille du tableau "<<endl;
    cin>>t.taille;
	t.T=(int*)malloc(t.taille*sizeof(int));
	
	return t;
}

tableau Saisie (tableau t)
{
	int i;
	
	for(i=0;i<t.taille;i++)
		{
			cout<<"entrer la valeur n' "<<i+1<<endl;
			cin>>t.T[i];
		}
	
	return t;
}

void affichage (tableau t)
{
		int i;
	
	for(i=0;i<t.taille;i++)
			cout<<"T ["<<i+1<<"] = "<<t.T[i]<<endl;

	
}


float moyenne (tableau t)
{
		int i,cpt=0;
	
	for(i=0;i<t.taille;i++)
			cpt+=t.T[i];

	return ((float)cpt/t.taille);
}


void max_min (tableau t,int& max, int& min)
{
		int i;
		
		
	
	for(i=1,min=max=t.T[0];i<t.taille;i++)
			{
				if(min>t.T[i])
				min=t.T[i];
				
				if(max<t.T[i])
				max=t.T[i];
				
		    }

}

void Aff_val (tableau t, int val)
{
	int i,cmpt=0;
	cout<<"la valeur est : "<<val <<" ses position sont : "<<endl;
	
	for(i=0;i<t.taille;i++)
	{
		if(val==t.T[i])
		{
		cout<<"pos: "<<i+1<<endl;
		cmpt++;
	   }
	
	}
	
	if(i==t.taille && cmpt ==0)
	cout<<"Valeur Introuvable"<<endl;
	
	cout<<"nombre d'apparition est: "<<cmpt<<endl;
}

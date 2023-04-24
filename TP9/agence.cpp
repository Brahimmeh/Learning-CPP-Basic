#include"agence.h"
#include<cstddef>

ville::ville()
{
	code=0;
	nbr_j=0;
	nom="";
}

ville::ville(int c,int n,string nm)
{
	do{
	     if(c<1 || c>40)
	     {
	     	cout<<"le code doit etre entre 1 et 40!!, Entrer le code :"<<endl;
	     	cin>>c;
		 }
	
   }while(c<1 || c>40);
	code=c;
	nbr_j=n;
	nom=nm;
}

ville::ville(ville& a)
{
	code=a.code;
	nbr_j=a.nbr_j;
	nom=a.nom;
}

void ville::saisie_v(int c,int n,string nm)
{
		do{
	     if(c<1 || c>40)
	     {
	     	cout<<"le code doit etre entre 1 et 40!!, Entrer le code :"<<endl;
	     	cin>>c;
		 }
	
   }while(c<1 || c>40);
	code=c;
	nbr_j=n;
	nom=nm;
}

void ville::affichage_v()
{
	cout<<"\nle code est :"<<code<<endl;
	cout<<"le nom de la ville :"<<nom<<endl;
	cout<<"le nombre de jour est :"<<nbr_j<<endl;
}

int comparer_v(ville a,ville b)
{
	if(a.code<b.code)
	return -1;
	
	else if(a.code>b.code)
	return 1;
	
	else
	return 0;
}

circuit::circuit()
{
	nbr_v=0;
	nom="";
	t=new ville[7];
}

circuit::circuit(ville* t,int n,string nm)
{
	nom=nm;
	this->t=t;
	nbr_v=n;
}

void circuit::saisie(ville* t,int n,string nm)
{
	nom=nm;
	this->t=t;
	nbr_v=n;
}

circuit::circuit(circuit& a)
{
	nom=a.nom;
	nbr_v=a.nbr_v;
	t=a.t;
}

string ville::get_nom()
{
	return nom;
}

int ville::get_code()
{
	return code;
}
bool circuit::verf_ville(string n)
{
	for(int i=0;i<nbr_v;i++)
	{
		if(t[i].get_nom()==n)
		return true;
	}
	
	return false;
}

void circuit::ajout_ville(int c,int n,string nm)
{	

    if(nbr_v>7)
    cout<<"lvous ne pouvez pas depasser 7 villes !!!"<<endl;

	else
	{
	t[nbr_v].saisie_v(c,n,nm);
	nbr_v++;
   }
}

int ville::get_nbr()
{
	return nbr_j;
}

int circuit::duree_cir()
{
	int som=0;
	
	for(int i=0;i<nbr_v;i++)
	{
		som+=t[i].get_nbr();
	}
	
	return som;
}

void circuit::supp_ville(string n)
{
	if(!verf_ville(n))
	cout<<"la ville n'existe pas"<<endl;
	
	else
	{
		for(int i=0;i<nbr_v;i++)
		{
			if(t[i].get_nom()==n)
			{
			   for(int j=i ; j<nbr_v ;j++)
			   t[j]=t[j+1];	
			   
			   nbr_v--;
			   break;
			}	
		}
	}
}

void circuit::aff_circuit()
{
	cout<<"\n\n****** le nom du circuit :"<<nom<<endl;
	cout<<"****** la liste des villes est :"<<endl;
	
	for(int i=0;i<nbr_v;i++)
	{
		cout<<"ville n' "<<i+1;
		t[i].affichage_v();
	}
	
	cout<<"Fin du circuit ***** "<<nom<<endl;
}

circuit circuit::circuitcommun(circuit& c)
{
	ville* t1=new ville[7];
	circuit cc(t1,0,"circuit_commun");
	
	for(int i=0;i<nbr_v;i++)
	{
		if(c.verf_ville(t[i].get_nom()))
		cc.ajout_ville(t[i].get_code(),t[i].get_nbr(),t[i].get_nom());
	}
	
	return cc;
}

circuit& plus_c (circuit* c,int n, int d)
{
	circuit p=c[0],m;
	

	
	for(int i=1;i<n;i++)
	{
		if(c[i].duree_cir()<p.duree_cir())
		p=c[i];
		
	}
	
	if(p.duree_cir()<=d)
	return p;
    
    
	else
	{ 
	    
		cout<<"Aucun circuit n'est valide pour votre recherche"<<endl;
		return m;
		
	}
}



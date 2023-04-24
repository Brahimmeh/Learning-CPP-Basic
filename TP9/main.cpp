#include "agence.h"

int main(int argc, char** argv) {

	
/*	
	//constr 1
	ville t;
	
	//constr 2
	ville t1(1,5,"rabat");
	
	//constr 3
	ville t2(t1);
	
	t.affichage_v();
	t1.affichage_v();
	t2.affichage_v();
	
	//tab de ville
	ville t3[5];
	
	for(int i=0;i<5;i++)
	{
		t3[i].saisie_v(12,12,"rabat");
	}
	
	//comparer
	switch(comparer_v(t1,t2))
	{
		case 1 : t1.affichage_v();
		case -1: t2.affichage_v();
		case 0: cout<<"les 2 villes sont egaux"<<endl;
	}

	//constr 1
     circuit c;
	 
	//constr 2
	circuit c1(t3,5,"Voy1");
	
	//constr 3
	circuit c2(c1);
	
	c.aff_circuit();
	c1.aff_circuit();
	c2.aff_circuit();
	
	//verification ville
	string v;
	cout<<"entrer la ville a rechercher"<<endl;
	cin>>v;
	if(c1.verf_ville(v))
	cout<<"existe"<<endl;
	
	else
	cout<<"n'existe pas"<<endl;
*/	
	//creation du tableau des circuits
	circuit t1[4];
	int n,cd,nmj; 
	string nm,nom;
	for(int j=0;j<4;j++)
	{
	
    cout<<"\nentrer le nom du circuit N'"<<j+1<<endl;
	cin>>nm;
	cout<<"entrer le nombre des villes du circuit N'"<<j+1<<endl;
	cin>>n;
	ville* v=new ville[7];
	t1[j].saisie(v,0,nm);
	for(int i=0;i<n;i++)
	{
		cout<<"ville n'"<<i+1<<endl;
		cout<<"entrer le code"<<endl;
		cin>>cd;
		cout<<"entrer le nom"<<endl;
		cin>>nom;
			if(t1[j].verf_ville(nom))
			{
	             cout<<"la ville existe, veuillez la rentrer"<<endl;
	             i--;
            }
		
	else
	{
		cout<<"entrer le nombre des jours"<<endl;
		cin>>nmj;
		t1[j].ajout_ville(cd,nmj,nom);
		
	}
	}
    t1[j].aff_circuit();
   }
   
  
    //verification d'existance
    cout<<"\nentrer le circuit a verifie"<<endl;
    cin>>n;
    cout<<"\nentrer la ville a verifie"<<endl;
    cin>>nom;
    if(t1[n-1].verf_ville(nom))
    cout<<"la ville existe dans le circuit"<<endl;
    
    else
    cout<<"la ville n'existe pas"<<endl;
    
    //duree d'un circuit
    for(int i=0;i<4;i++)
    cout<<"\nla duree du circuit N' "<<i+1<<" est "<<t1[i].duree_cir()<<endl;
    
    //retirer une ville
    cout<<"\nentrer le circuit pour la modification"<<endl;
    cin>>n;
    cout<<"\nentrer la ville a retire"<<endl;
    cin.clear();
    cin>>nom;
    t1[n-1].supp_ville(nom);
    t1[n-1].aff_circuit();

 
   circuit c;
   cout<<"entrer le num des 2 circuit a verifie"<<endl;
   cin>>n>>cd;
   c=t1[n-1].circuitcommun(t1[cd-1]);
  t1[n-1].aff_circuit();
  t1[cd-1].aff_circuit();
  c.aff_circuit();
  
  
  
  int d1;
  cout<<"entrer la duree du recherche"<<endl;
  cin>>d1;
  circuit c1;
  c1=plus_c (t1,4,d1);
  if(c1.duree_cir()>0)
  {  cout<<"le circuit valide pour la duree est:"<<endl;
     c1.aff_circuit();
  }
  

  
  

  

}

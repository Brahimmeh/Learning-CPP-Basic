#include <iostream>
#include "rationnel.h"
using namespace std;


int main(int argc, char *argv[]) {
	
	

		int c,v,x;
		bool k;
		rationnel a;
		
		
do{
	
	affichage();

	cout<<"\t \t  \t Menu"<<endl;
cout<<"\t \t 1- Creation d'un rationnel"<<endl;	
cout<<"\t \t 2- Affichage d'un rationnel"<<endl;
cout<<"\t \t 3- Affichage de l'inverse d'un rationnel"<<endl;
cout<<"\t \t 4- Affichage de l'approximation d'un rationnel"<<endl;
cout<<"\t \t 5- Affichage de la forme irreductible d'un rationnel"<<endl;
	
		do{
			if(v==0)
	k=false;
	cout<<"\n Entrer votre choix"<<endl;
	cin>>c;	
		switch(c)
		{ 
		
			case 1:{
                    cout<<"Entrer le denominateur"<<endl;
                    cin>>a.deumr;
                    cout<<"Entrer le numerateur"<<endl;
                    cin>>a.numr;
                    k=true;
				break;
			}
			
			case 2:{
				if(k)
				{cout<<"\n\n\t \t Affichage d'un rationnel 1"<<endl;
                Affchage (a);}
                
                else
                {
                	cout<<"veuillez entrer un rationnel"<<endl;
                    cout<<"Entrer le denominateur"<<endl;
                    cin>>a.deumr;
                    cout<<"Entrer le numerateur"<<endl;
                    cin>>a.numr;
				}
				break;
			}
			
			case 3:
				{
					if(k)
				{cout<<"\n\n\t \t Affichage de l'inverse d'un rationnel 1"<<endl;
                    rationnel d;
                    d=inver_rat (a);
                    Affchage (d);}
                
                else
                {
                cout<<"veuillez entrer un rationnel"<<endl;
                    cout<<"Entrer le denominateur"<<endl;
                    cin>>a.deumr;
                    cout<<"Entrer le numerateur"<<endl;
                    cin>>a.numr;
					
              }
              break;
                    
				}
				
			case 4:
				{
					if(k)
				{cout<<"\n\n\t \t Affichage de l'approximation d'un rationnel 1"<<endl;
                    cout<<Conv_reel(a)<<endl;}
                
                else
                {
                	cout<<"veuillez entrer un rationnel"<<endl;
                    cout<<"Entrer le denominateur"<<endl;
                    cin>>a.deumr;
                    cout<<"Entrer le numerateur"<<endl;
                    cin>>a.numr;
				}
				
				break;}
				
		    case 5:
		    	{
		    	if(k)
				{cout<<"\n\n\t \t Affichage de la forme irreductible d'un rationnel 1"<<endl;
                 a=forme_irr (a);
                 Affchage (a);}
                
                else
                {
                	cout<<"veuillez entrer un rationnel"<<endl;
                    cout<<"Entrer le denominateur"<<endl;
                    cin>>a.deumr;
                    cout<<"Entrer le numerateur"<<endl;
                    cin>>a.numr;
				}
				break;
				
				}
				
				default:
					{
						cout<<"choix inavlid"<<endl;
					}
		}
	
	cout<<"voulez vous refaire le traitement(entrer 1 pour oui et 0 pour non)"<<endl;
	cin>>v;

}while(v==1);

cout<<"voulez vous traiter un nv rationnel (entrer 1 pour oui et 0 pour non)"<<endl;
	cin>>x;
}while(x==1 || v==1);

	return 0;
}

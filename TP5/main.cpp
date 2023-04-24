#include<iostream>
#include<cstdlib>
#include "tableau.h"

using namespace std;

main()
{
	tableau t;
	int taille,a;
	t=initialiser();
	cout<<"\t \t SAISIE"<<endl;
	t=Saisie (t);
	
	cout<<"\t \t MOY"<<endl;
	cout<<"le moyenne est: "<<moyenne (t)<<endl;
	
	cout<<"\t \t MAX ET MIN"<<endl;
	int min,max;
	int& m=max,mn=min;
	max_min (t,max,min);
	cout<<"le max est : "<<max<<endl;
	cout<<"le min est : "<<min<<endl;
	
	cout<<"entrer la valeur a afficher"<<endl;
	cin>>a;
	Aff_val (t,a);
	
	
	
}

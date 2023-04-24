#include<cstdlib>
#include"complexe.h"

using namespace std;

int complexe::cmpt=0;
main()
{ 
//constr_1
	complexe a(1,2);
	a.affichage();
//constr_2
	complexe d(a);
	d.affichage();
//contr_3
	complexe f;
	int w,b;
	w=5; b=6;
//fuction_Saisie
	f.saisie(w,b);
//function affichage
	f.affichage();
	float md;
	md=f.module();
	cout<<"le module est : "<<md<<endl;
//fuction_creation
complexe y;
y=y.creation(a);
y.affichage();
complexe j;
j.affichage_cmpt();
//saisie du tableau allocation statique
int n;
complexe t[50];
cout<<"entrer la taille du tableau 1"<<endl;
cin>>n;
RemplirTC(t,n);


complexe& res=GetMin(t,n);
cout<<"le nombre complexe ayant le petit module (Tab1) est "<<endl;
t[0].affichage();
AfficherTC(t,n);
AfficherReel(t,n);

//saisie du tableau allocation dynamique
cout<<"entrer la taille du tableau 2"<<endl;
cin>>n;
complexe* t1=(complexe*)malloc(n*sizeof(complexe));
RemplirTC(t1,n);
AfficherTC(t1,n);

complexe& res1=GetMin(t1,n);
cout<<"le nombre complexe ayant le petit module (Tab2) est "<<endl;
t[0].affichage();



	return 0;
}

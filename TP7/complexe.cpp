#include<cmath>
#include"complexe.h"

using namespace std;


complexe::complexe()
{
	a=0;
	b=0;
	cmpt++;
}

complexe::complexe(int a, int b)
{
	this->a =a;
	this->b =b;
	cmpt++;
}

complexe::complexe(complexe& r)
{
	a=r.a;
	b=r.b;
	cmpt++;
}

void complexe::saisie(int a, int b)
{
	this->a =a;
	this->b =b;
}

void complexe::affichage()
{
	cout<<"le nombre complexe est :  "<<a<<" +i"<<b<<endl;
}

void complexe::affichage_cmpt()
{

	cout<<"le nombre des complexes cree est: "<<cmpt<<endl;
}

float complexe::module()
{
	c=(float) abs(sqrt(pow(a,2) + pow (b,2)));
	return c;
}
//copie d'un complexe
complexe complexe::creation(complexe f)
{
	complexe cp(f.a,f.b);
	return cp;
}

void RemplirTC(complexe* t,int n)
{
	int a,b;
	for(int i=0;i<n;i++)
	{
		cout<<"entrer la partie reel du nombre complexe n "<<i+1<<endl;
		cin>>a;
		cout<<"entrer la partie imaginaire du nombre complexe n "<<i+1<<endl;
		cin>>b;
		t[i].saisie(a,b);
	}
}

void AfficherTC(complexe* t,int n)
{
	for(int i=0;i<n;i++)
	{
	   cout<<"le nombre complexe n' "<<i+1<<endl;
	   t[i].affichage();
	}
}

complexe& GetMin(complexe* t,int n)
{
	float m;
	complexe min;
	 for(int i=1,m=t[0].module();i<n;i++)
	 {
	 	if(m>t[i].module())
	 	{
	 		m=t[i].module();
	 		min=t[i];
		 }
	 	
	 }
	 
	 return min;
}

int complexe::ret_reel()
{
	return a;
}

void complexe::AfficherReel(complexe* t,int n)
{
	complexe m(t[0]);
	
	
		 for(int i=1;i<n;i++)
	 { 

	 	if(m.a<t[i].a)
			 m=t[i];


	 }
	 
	 cout<<"le complexe ayant la plus grande parti reelle est :"<<endl;
	 m.affichage();
	 
}


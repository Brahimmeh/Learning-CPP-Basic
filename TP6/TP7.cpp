#include<iostream>
#include<cmath>

using namespace std;

double Distance(double xa,double ya,double xb, double yb)
{
	return abs(sqrt(pow(xb-xa,2) + pow (yb-ya,2)));
}

  
bool Premier(int a)
{
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		return false;
	}
	
	return true;
}

int Premier_n (int a)
{
	for(int i=a;i>1;i--)
	{
		if(Premier(i))
		return i;
	}
	
	return 1;
}
bool test_tab (int tab[],int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		if(tab[i]<0 || tab[i]>10)
		return false;

	}

	return true;

}

int calc_tab (int tab[],int n)
{
	int cmpt=0;
	
	for(int i=0;i<n;i++)
	{
		if(tab[i]>=0 && tab[i]<=10)
		cmpt++;

	}

	return cmpt;

}
main()
{
	//exo 1
	double xa,ya,xb,yb;
	cout<<"entrer les coordonnees du depart"<<endl;
	cout<<"x"<<endl;
	cin>>xa;
	cout<<"y"<<endl;
    cin>>ya;
	cout<<"entrer les coordonnees d'arrive"<<endl;
	cout<<"x"<<endl;
	cin>>xb;
	cout<<"y"<<endl;
    cin>>yb;
    
	cout<<"la Distance est: "<<Distance(xa,ya,xb,yb)<<endl;
	
	//exo 2
	int k;
	cout<<"entrer l'entier 1"<<endl;
	cin>>k;
	if(Premier(k))
	cout<<"Premier"<<endl;
	else
	cout<<"Non premier"<<endl;
	
	cout<<"entrer l'entier 2"<<endl;
	cin>>k;
	cout<<"le n'ieme nombre premier est: "<<Premier_n (k)<<endl;

    //exo 3
    int T[20],n;
	cout<<"entrer la taille "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"T["<<i<<"] :"<<endl;
		cin>>T[i];
	}	
	if(test_tab (T,n))
	cout<<"le tableau compris des valeurs entre 0 et 10"<<endl;
	
	else
	cout<<"le tableau ne compris pas que des valeurs entre 0 et 10"<<endl;
	
	cout<<"le nombre des valeurs comprises entre 0 et 10 est :"<<calc_tab (T,n)<<endl;
}

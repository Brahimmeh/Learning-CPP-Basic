#include "surcharge.h"

int main(int argc, char** argv) {
	
	monome p = monome(3,2);
	monome p1;
	cin>>p1;
	cout<<p1<<endl;
	cout<<p<<endl;
	
    monome res=p+p1;
    cout<<"le resultat d'addition "<<res<<endl;
    
    res=p*p1;
    cout<<"le resultat de multiplication "<<res<<endl;
    
    if(p1<p)
    cout<<p1<<"<"<<p<<endl;

    
    
	if(p==p1)
	cout<<"egaux"<<endl;
	else
	cout<<"non egaux"<<endl;
	
	if(!p)
	cout<<p<<" non nul"<<endl;
	
	res=~p1;
	cout<<"la derivee est :"<<res<<endl;
	
	return 0;
}

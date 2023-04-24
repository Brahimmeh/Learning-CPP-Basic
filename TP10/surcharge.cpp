#include "surcharge.h"
#include<ostream>
using namespace std;

monome::monome(){
	a=0;
	n=0;
}

monome::monome(float c, int d)
{
	a=c;
	n=d;
}
/*
monome::monome(monome& f)
{
	a=f.a;
	n=f.n;
}
*/
ostream& operator << (ostream& out, const monome p)
{
	out<<p.a<<"X^"<<p.n;
	return out;
}

istream& operator >> (istream& in,monome& p)
{
	cout<<"enter the coef :"<<endl;
	in>>p.a;
	cout<<"enter the degree :"<<endl;
	in>>p.n;
	return in;
}

monome operator + (monome p1,monome p2)
{
	monome r;
	 if(p1.n==p2.n)
	 {
	 	r.n=p1.n;
	 	r.a=p1.a+p2.a;
	 }
	 
	 else
	 cout<<"Erreur"<<endl;
	 
	 return r;
	
}

monome operator * (monome p1,monome p2)
{
	monome r;
	 if(p1.n==p2.n)
	 {
	 	r.n=p1.n+p2.n;
	 	r.a=p1.a*p2.a;
	 }
	 
	 else
	 cout<<"Erreur"<<endl;
	 
	 return r;
	
}

bool operator == (monome p1,monome p2)
{
	if(p1.n==p2.n && p1.a==p2.a)
	return true;
	
	else
	return false;
}

int operator < (monome p1,monome p2)
{
	if(p1.n<p2.n)
	return 1;
	
	else 
	return 0;

}

bool operator ! (monome p)
{
	if(p.a)
	return true;
	
	else
	return false;
}

monome operator ~ (monome p)
{
	monome y;
	
	y.a=p.a*p.n;
	y.n=--p.n;
	
	return y;
}

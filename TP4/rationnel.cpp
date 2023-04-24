#include <iostream>
#include"rationnel.h"
using namespace std;

rationnel creation (int a, int b)
{
	rationnel c;
	c.numr=a;
	c.deumr=b;
	
	return c;
}

void Affchage (rationnel a)
{
	cout<<a.numr<<"/"<<a.deumr<<endl;
}

float Conv_reel (rationnel a)
{
	float b;
	b=(float)a.numr/a.deumr;
	
	return b;
}

rationnel inver_rat (rationnel a)
{
	rationnel b;
    b.numr=a.deumr;
    b.deumr=a.numr;
	
	return b;
}

int PGCD (rationnel a)
{
   int i,min,PGCD;
   
   if(a.deumr<a.numr)
   min=a.deumr;
   else
   min=a.numr;
   
   PGCD=1;
   
   for(i=1;i<=min/2;i++)
   {
   	   if(a.deumr%i==0 && a.numr%i==0)
   	   {
   	   	      if(i>PGCD)
   	   	      PGCD=i;
		}
	}
	
	return PGCD;	
}

rationnel forme_irr (rationnel a)
{
	int d;
	d= PGCD(a);
	a.numr=a.numr/d;
	a.deumr=a.deumr/d;
	
	return a;
}



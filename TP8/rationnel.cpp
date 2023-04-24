#include <iostream>
#include"rationnel.h"
using namespace std;


rationnel::rationnel()
{
	numr=0;
	deumr=1;
	
}

rationnel::rationnel(int a, int b)
{
	this->numr =a;
	this->deumr =b;
	
}

rationnel::rationnel(rationnel& r)
{
	numr=r.numr;
	deumr=r.deumr;
	
}

void rationnel::creation(int a, int b)
{
	
	numr=a;
	deumr=b;

}

void rationnel::Affchage()
{
	cout<<numr<<"/"<<deumr<<endl;
}

float rationnel::Conv_reel ()
{
	float b;
	b=(float)numr/deumr;
	
	return b;
}

void rationnel::inver_rat ()
{
	int a;
    a=numr;
    numr=deumr;
    deumr=a;
	
	
}

int rationnel::PGCD ()
{
   int i,min,PGCD;
   
   if(deumr<numr)
   min=deumr;
   else
   min=numr;
   
   PGCD=1;
   
   for(i=1;i<=min/2;i++)
   {
   	   if(deumr%i==0 && numr%i==0)
   	   {
   	   	      if(i>PGCD)
   	   	      PGCD=i;
		}
	}
	
	return PGCD;	
}

void rationnel::forme_irr ()
{
	
	rationnel b(numr,deumr);
	numr=numr/b.PGCD();
	deumr=deumr/b.PGCD();

}



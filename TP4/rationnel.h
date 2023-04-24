#include <iostream>
using namespace std;

typedef struct rationnel
{
	int numr,deumr;
}rationnel;


rationnel creation (int a,int b);
void Affchage (rationnel r);
float Conv_reel (rationnel r);
rationnel inver_rat (rationnel r);
int PGCD (rationnel r);
rationnel forme_irr (rationnel r);


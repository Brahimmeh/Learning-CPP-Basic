#include <iostream>
using namespace std;

class rationnel
{
	int numr,deumr;
	
	public:
		rationnel();
		rationnel(int,int);
		rationnel(rationnel &);
		void creation (int a,int b);
        void Affchage ();
        float Conv_reel ();
        void inver_rat ();
        int PGCD ();
        void forme_irr ();
};





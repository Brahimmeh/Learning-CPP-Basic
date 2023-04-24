#include <iostream>
using namespace std;

class complexe
{
	int a,b;
	float c;
	static int cmpt ;
	
	public:
		
		complexe();
		complexe(int,int);
		complexe(complexe &);
		void saisie(int,int);
		void affichage();
		void affichage_cmpt();
		float module();
		complexe creation (complexe);
		int ret_reel();
		friend void AfficherReel(complexe*, int);
		 
};

        void RemplirTC (complexe*,int);
		void AfficherTC(complexe*,int);
		complexe& GetMin(complexe*,int);
		
		

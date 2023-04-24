#include<iostream>
using namespace std;

class ville{
	
	int code,nbr_j;
	string nom;
	
	public:
	ville();
	ville(int,int,string);
	ville(ville&);
	void saisie_v(int,int,string);
	void affichage_v();
	friend int comparer_v(ville,ville);
	int get_nbr();
	string get_nom();
	int get_code();
	
};

class circuit{
	
	string nom;
	int nbr_v;
	ville* t;
	
	public:
		circuit();
		circuit(ville*,int,string);
		circuit(circuit&);
		void saisie(ville*,int,string);
		bool verf_ville(string);
		void ajout_ville(int,int,string);
		int duree_cir();
		void supp_ville(string);
		void aff_circuit();
		circuit circuitcommun(circuit&);
};

circuit& plus_c (circuit*,int,int);

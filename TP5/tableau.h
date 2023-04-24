#include<iostream>

typedef struct tableau
{
	int* T;
    int taille;
}tableau;


tableau initialiser ();
tableau Saisie (tableau t);
void affichage (tableau t);
float moyenne (tableau t);
void max_min (tableau t,int& max, int& min);
void Aff_val (tableau t, int val);


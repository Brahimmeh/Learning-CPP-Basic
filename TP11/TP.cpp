#include<iostream>
using namespace std;

class compte{
	protected:
	int code;
	float solde;
	
	public:
		compte(float);
		void aff();
		void aj_dep(float);
		void sous_ret(float);		
};

class compteEparge : public compte{
	
	int interet;
	
	public:
		compteEparge(float);
		void calculInte();
		void aff();
		
};


class comptePayant : public compte{
	
	public:
		comptePayant(float);
		void aj_dep();
		void sous_ret();
		
};

compte::compte(float s=0){
	code=1;
	solde=s;
}

void compte::aj_dep(float a)
{
	solde+=a;
}

void compte::sous_ret(float d)
{
	solde-=d;
}

compteEparge::compteEparge(float s=0):compte(s)
{
	interet=6;
}

void compteEparge::calculInte()
{
	solde+=(solde*interet)/100;
}

comptePayant::comptePayant(float s):compte(s)
{
	
}

void comptePayant::aj_dep()
{
	compte::aj_dep(5);
}

void comptePayant::sous_ret()
{
	compte::sous_ret(5);
}

void compte::aff()
{
	cout<<"le code du compte est :"<<code;
	cout<<"le solde du compte est :"<<solde;
}

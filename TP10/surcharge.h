#include<iostream>
using namespace std;

class monome{
	float a;
	int n;
	
	public:
	monome();
	monome(float,int);
	//monome(monome&);
	friend ostream& operator << (ostream&, const monome);
	friend istream& operator >> (istream&,monome&);
	friend monome operator + (monome,monome);
	friend monome operator * (monome,monome);
	friend bool operator == (monome,monome);
	friend int operator < (monome,monome);
	friend bool operator ! (monome);
	friend monome operator ~ (monome);

};



#pragma once
#pragma once
#include <iostream>
using namespace std;
class Cauhoi {
protected:
	char type;
	string id;
	string cauhoi;
	string dapanA;
	string dapanB;
	string dapanC;
	string dapanD;
	char dapan;
public:
	Cauhoi(char = 'NULL',string = "NULL", string = "NULL", string = "NULL", string = "NULL", string = "NULL", string = "NULL", char = 'NULL');
	void settype(char);
	void setid(string);
	void setcauhoi(string);
	void setdapanA(string);
	void setdapanB(string);
	void setdapanC(string);
	void setdapanD(string);
	void setdapan(char);

	char gettype();
	string getid();
	string getcauhoi();
	string getdapanA();
	string getdapanB();
	string getdapanC();
	string getdapanD();
	char getdapan();
	friend istream &operator>>(istream& in, Cauhoi& cauhoi);
};

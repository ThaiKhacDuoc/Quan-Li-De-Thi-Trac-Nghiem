#include <iostream>
#include "Cauhoi.h"
using namespace std;
Cauhoi::Cauhoi(char type,string id, string cauhoi, string dapanA, string dapanB, string dapanC, string dapanD, char dapan) 
	: type (type), id(id), cauhoi(cauhoi), dapanA(dapanA), dapanB(dapanB), dapanC(dapanC), dapanD(dapanD), dapan(dapan) {}
void Cauhoi::settype(char) {
	this->type = type;
}
void Cauhoi::setid(string) {
	this->id = id;
}
void Cauhoi::setcauhoi(string) {
	this->cauhoi = cauhoi;
}
void Cauhoi::setdapanA(string) {
	this->dapanA = dapanA;
}
void Cauhoi::setdapanB(string) {
	this->dapanB = dapanB;
}
void Cauhoi::setdapanC(string) {
	this->dapanC = dapanC;
}
void Cauhoi::setdapanD(string) {
	this->dapanD = dapanD;
}
void Cauhoi::setdapan(char) {
	this->dapan = dapan;
}

char Cauhoi::gettype() {
	return type;
}
string Cauhoi::getid() {
	return id;
}
string Cauhoi::getcauhoi() {
	return cauhoi;
}
string Cauhoi::getdapanA() {
	return dapanA;
}
string Cauhoi::getdapanB() {
	return dapanB;
}
string Cauhoi::getdapanC() {
	return dapanC;
}
string Cauhoi::getdapanD() {
	return dapanD;
}
char Cauhoi::getdapan() {
	return dapan;
}
istream& operator>> (istream& in, Cauhoi& cauhoi) {
	cout << "Xin moi nhap muc do de (1 : Binh thuong; 2: Kho): ";
	in >> cauhoi.type;
	cout << "Xin moi ban nhap cau hoi: ";
	in >> cauhoi.cauhoi;
	cout << "Xin moi ban nhap dap an A cho cau hoi: ";
	in >> cauhoi.dapanA;
	cout << "Xin moi ban nhap dap an B cho cau hoi: ";
	in >> cauhoi.dapanB;
	cout << "Xin moi ban nhap dap an C cho cau hoi: ";
	in >> cauhoi.dapanC;
	cout << "Xin moi ban nhap dap an D cho cau hoi: ";
	in >> cauhoi.dapanD;
	cout << "Xin moi ban nhap dap an chinh xac cua cau hoi: ";
	in >> cauhoi.dapan;
	return in;
}


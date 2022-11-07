#include <iostream>
#include<string>
#include "User.h"
using namespace std;
User::User(string Ten, int Tuoi, bool Gioitinh) {
	this ->Ten = Ten;
	this ->Tuoi = Tuoi;
	this ->Gioitinh = Gioitinh;
}
User::~User() {
}
void User::setTen(string) {
	this -> Ten = Ten;
}
void User::setTuoi(int) {
	this->Tuoi = Tuoi;
}
void User::setGioitinh(bool) {
	this->Gioitinh = Gioitinh;
}
string User::getTen() {
	return Ten;
}
int User::getTuoi() {
	return Tuoi;
}
bool User::getGioitinh() {
	return Gioitinh;
}
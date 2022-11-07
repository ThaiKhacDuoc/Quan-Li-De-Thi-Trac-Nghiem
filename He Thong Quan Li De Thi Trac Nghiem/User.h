#pragma once
class User {
private:
	string Ten;
	int Tuoi;
	bool Gioitinh;
public:
	User(string, int, bool);
	~User();
	void setTen(string);
	void setTuoi(int);
	void setGioitinh(bool);
	string getTen();
	int getTuoi();
	bool getGioitinh();
};


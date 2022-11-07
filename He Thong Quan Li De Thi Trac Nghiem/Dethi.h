#pragma once
#include <iostream>
#include "Cauhoi.h"
using namespace std;
class Dethi{
private:
	int p;
	Cauhoi* Cauhoi;
public:
	Dethi(const Dethi &a);
	Dethi();
	~Dethi();
	void XemKhocauhoi();
	void ThemCauHoiVaoKho();
	void TaoDethi();
	void XoaCauHoiCuaKho();
	void TestDethi();
	void XemLichSuTest();
};
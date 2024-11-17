#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Cihaz.h"
#include<vector>

class Oda {
	string tip;
	vector<Cihaz> cihazlar;
public:
	Oda(string _tip);
	Oda();
	void cihazEkle(Cihaz cihaz);
	string bilgi();
	Cihaz getCihaz(int index);
};
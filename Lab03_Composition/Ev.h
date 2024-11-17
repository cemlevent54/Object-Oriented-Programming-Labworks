#pragma once
#include<iostream>
#include<string>
using namespace std;
#include<vector>

#include "Cihaz.h"
#include "Oda.h"

class Ev {
	vector<Oda> odalar;
public:
	Ev(Oda oda);
	void odaEkle(Oda oda);
	int bilgi();
	Oda getOda(int index);
	void odaSil();
};
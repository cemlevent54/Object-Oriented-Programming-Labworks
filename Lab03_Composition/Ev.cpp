#include "Oda.h"
#include "Ev.h"
#include "Cihaz.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>

Ev::Ev(Oda oda) {
	// ev should have at least one room
	odalar.push_back(oda);
}

void Ev::odaEkle(Oda oda) {
	odalar.push_back(oda);
}

int Ev::bilgi() {
	return odalar.size();
}





void Ev::odaSil() {
	odalar.pop_back();
}
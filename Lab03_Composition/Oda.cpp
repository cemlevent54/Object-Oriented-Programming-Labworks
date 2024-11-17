#include "Oda.h"
#include "Ev.h"
#include "Cihaz.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>

Oda Ev::getOda(int index) {
	return odalar[index];
}

Oda::Oda(string _tip) {
	tip = _tip;
}

void Oda::cihazEkle(Cihaz cihaz) {
	cihazlar.push_back(cihaz);
}

string Oda::bilgi() {
	return tip;
}


Cihaz Oda::getCihaz(int index) {
	return cihazlar[index];
}

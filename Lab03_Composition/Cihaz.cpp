#include "Cihaz.h"
#include "Oda.h"
#include "Ev.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Cihaz::Cihaz() {
	tip = "";
	durum = false;
}

Cihaz::Cihaz(string _tip, bool _durum) {
	tip = _tip;
	durum = _durum;
}

bool Cihaz::acKapat() {
	durum = !durum;
	return durum;
}

string Cihaz::bilgi(string _tip) {
	if (_tip == "tip") {
		return tip;
	}
	else {
		if (_tip == "durum") {
			if (durum) {
				return "Acik";
			}
			else {
				return "Kapali";
			}
		}

	}
	return "";

}
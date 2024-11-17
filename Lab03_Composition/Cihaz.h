#pragma once
#include<iostream>
#include<string>
using namespace std;

class Cihaz {
private:
	string tip;
	bool durum;
public:
	Cihaz();
	Cihaz(string _tip, bool _durum);
	bool acKapat();
	string bilgi(string _tip);


};
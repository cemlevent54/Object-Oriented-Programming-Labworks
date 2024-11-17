// PreLab_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



struct Complex {
	double real;
	double imag;
};

struct Vector3D {
	double x;
	double y;
	double z;
};

struct Fraction {
	double pay;
	double payda;
};

struct Counter {
	int value;
	Counter(int initialCount) : value(initialCount) {}


};

Complex operator+(const Complex& a, const Complex& b) {
	Complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	return result;
}

Vector3D operator*(const Vector3D& a, const Vector3D& b) {
	Vector3D result;
	result.x = a.x * b.x;
	result.y = a.y * b.y;
	result.z = a.z * b.z;
	return result;
}


Counter& operator++(Counter& a) {
	a.value += 2;
	return a;
}


Counter operator++(Counter& a, int) {
	Counter temp = a;
	a.value += 2;
	return temp;
}

Counter& operator--(Counter& a) {
	a.value = a.value - 2;
	return a;
}

Counter operator--(Counter& a, int) {
	Counter temp = a;
	a.value = a.value - 2;
	return temp;
}



Vector3D operator*(const Vector3D& a, double scalar) {
	Vector3D result;
	result.x = a.x * scalar;
	result.y = a.y * scalar;
	result.z = a.z * scalar;
	return result;
}

bool operator==(const Fraction& a, const Fraction& b) {

	if (a.payda == 0 || b.payda == 0) {
		return false;
	}

	return a.pay * b.payda == b.pay * a.payda;
}




int max(int a, int b) {
	return a > b ? a : b;
}

double max(double a, double b) {
	return a > b ? a : b;
}

char max(char a, char b) {
	return a > b ? a : b;
}

void print(int a) {
	cout << a << endl;
}

void print(const string& a) {
	cout << a << endl;
}

void print(char& a) {
	cout << a << endl;
}

int calculate(int a, int b) {
	return a + b;
}

int calculate(int a, int b, int c) {
	return a * b * c;
}

int calculate(int a, int b, char c) {
	if (c == '-') {
		return a - b;
	}
	else {
		return 0;
	}
}

int main()
{
	// 1. Karma��k Say� Toplama Testleri
	for (int i = 0; i < 10; ++i) {
		Complex a = { i, i + 1 };
		Complex b = { i + 2, i + 3 };
		Complex result = a + b;
		if (result.real == a.real + b.real && result.imag == a.imag + b.imag) {
			cout << "Complex test success." << endl;
		}
		else
		{
			cout << "Complex test FAIL." << endl;
		}
	}

	// 2. Vekt�r �arp�m� Testleri
	for (int i = 0; i < 10; ++i) {
		Vector3D v = { i, i + 1, i + 2 };
		double scalar = i * 1.5;
		Vector3D result = v * scalar;
		if (result.x == v.x * scalar && result.y == v.y * scalar && result.z == v.z * scalar) {
			cout << "Vector test success." << endl;
		}
		else
		{
			cout << "Vector test FAIL." << endl;
		}
	}

	// 3. Kesitli Say� Kar��la�t�rma Testleri
	for (double i = 1; i <= 10; ++i) {
		Fraction f1 = { i, 2 * i };
		Fraction f2 = { i / 2, i };
		if ((f1 == f2) == true) {
			cout << "Fraction test success." << endl;
		}
		else
		{
			cout << "Fraction test FAIL." << endl;
		}
	}

	// 4. max Fonksiyonu Testleri
	cout << endl << "Max tests" << endl;
	if (max(3, 5) == 5) cout << "Max test 1 success." << endl;
	if (max(7.2, 7.1) == 7.2) cout << "Max test 2 success." << endl;
	if (max('a', 'b') == 'b') cout << "Max test 3 success." << endl;

	// 5. print Fonksiyonu Testleri
	cout << endl << "Print tests" << endl;
	print(10);
	print(3.14);
	print("Hello");
	print('A');


	// 6. Saya� Testi

	Counter counter(0);

	// Test 1: Prefix '++' operat�r�
	++counter;
	if (counter.value == 2) {
		std::cout << "Test 1 Success: ++counter, value = " << counter.value << std::endl;
	}
	else {
		std::cout << "Test 1 FAIL: ++counter, value = " << counter.value << std::endl;
	}

	// Test 2: Postfix '++' operat�r�
	counter++;
	if (counter.value == 4) {
		std::cout << "Test 2 Success: counter++, value = " << counter.value << std::endl;
	}
	else {
		std::cout << "Test 2 FAIL: counter++, value = " << counter.value << std::endl;
	}

	// Test 3: Prefix '--' operat�r�
	--counter;
	if (counter.value == 2) {
		std::cout << "Test 3 Success: --counter, value = " << counter.value << std::endl;
	}
	else {
		std::cout << "Test 3 FAIL: --counter, value = " << counter.value << std::endl;
	}

	// Test 4: Postfix '--' operat�r�
	counter--;
	if (counter.value == 0) {
		std::cout << "Test 4 Success: counter--, value = " << counter.value << std::endl;
	}
	else {
		std::cout << "Test 4 FAIL: counter--, value = " << counter.value << std::endl;
	}

	// 7. calculate Fonksiyonu Testleri
	// Toplama i�lemi testleri
	for (int i = 0; i < 10; ++i) {
		int a = i;
		int b = i + 1;
		int result = calculate(a, b);
		int expected = a + b;
		if (result == expected) {
			cout << "Sum test success: " << a << " + " << b << " = " << result << endl;
		}
		else {
			cout << "Sum test FAIL: " << a << " + " << b << " = " << result << " (expected: " << expected << ")" << endl;
		}
	}

	// �arpma i�lemi testleri
	for (int i = 1; i <= 10; ++i) {
		int a = i;
		int b = i + 1;
		int c = i + 2;
		int result = calculate(a, b, c);
		int expected = a * b * c;
		if (result == expected) {
			cout << "Multiply test success: " << a << " * " << b << " * " << c << " = " << result << endl;
		}
		else {
			cout << "Multiply test FAIL: " << a << " * " << b << " * " << c << " = " << result << " (expected: " << expected << ")" << endl;
		}
	}

	// ��karma i�lemi testleri
	for (int i = 0; i < 10; ++i) {
		int a = i + 10;
		int b = i;
		int result = calculate(a, b, '-');
		int expected = a - b;
		if (result == expected) {
			cout << "Subtract test success: " << a << " - " << b << " = " << result << endl;
		}
		else {
			cout << "Subtract test FAIL: " << a << " - " << b << " = " << result << " (expected: " << expected << ")" << endl;
		}
	}



	return 0;
}


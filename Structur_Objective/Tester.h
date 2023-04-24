#pragma once  // plik nag��wkowy potrzebny do istnienia klasy w odr�bnym pliku
// w ka�dej klasie powinny by� dyrektywa iostream i using namespace std;

#include <iostream>
using namespace std;

// cia�o klasy
class Tester
{
	// pola - w�a�ciwo�ci z flag� public - stosowanie camelCase w metodach i w�a�ciwo�ciach

public:
	int firstValue;
	int lastValue;

	// konstruktory z flag� public argumentowy , oparty na nazwie klasy - w�a�ciwo�ci poprzedzone s�owem kluczowym this

	Tester(int a, int b) {
		this->firstValue = a;
		this->lastValue = b;
	}

	// funkcjonalno�ci - metody z flag� public zwracana z argumentem

	int firstMethod(int a) {
		return a * a;
	}
	
	// meotda nie zwracana wy�wietlaj�ca obliczenie metody zwracanej
	void show() {
		cout << firstMethod(5) << endl;
	}
   


};


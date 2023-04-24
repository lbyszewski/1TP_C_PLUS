#pragma once  // plik nag³ówkowy potrzebny do istnienia klasy w odrêbnym pliku
// w ka¿dej klasie powinny byæ dyrektywa iostream i using namespace std;

#include <iostream>
using namespace std;

// cia³o klasy
class Tester
{
	// pola - w³aœciwoœci z flag¹ public - stosowanie camelCase w metodach i w³aœciwoœciach

public:
	int firstValue;
	int lastValue;

	// konstruktory z flag¹ public argumentowy , oparty na nazwie klasy - w³aœciwoœci poprzedzone s³owem kluczowym this

	Tester(int a, int b) {
		this->firstValue = a;
		this->lastValue = b;
	}

	// funkcjonalnoœci - metody z flag¹ public zwracana z argumentem

	int firstMethod(int a) {
		return a * a;
	}
	
	// meotda nie zwracana wyœwietlaj¹ca obliczenie metody zwracanej
	void show() {
		cout << firstMethod(5) << endl;
	}
   


};


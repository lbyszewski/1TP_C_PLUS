#pragma once
#include <iostream>
#include "Base.h"
using namespace std;
class ChildOne : public Base
{
	// meotdy nadpisane z klasy bazowej polimorficznie 
public:
	int calcThis() {
		int r = 10 * 3*10;
		return r;
	}
	void showThisCalc() {
		cout << this->calcThis() << endl;
	}
};


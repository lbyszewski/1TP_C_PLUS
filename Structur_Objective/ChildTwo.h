#pragma once
#include <iostream>
#include "Base.h"
using namespace std;

class ChildTwo : public Base
{

public:
	int calcThis() {
		int r = 5 * 3;
		return r;
	}
	void showThisCalc() {
		cout << this->calcThis() << endl;
	 }


};


#pragma once
#include <iostream>
using namespace std;
class Base
{
	// Bazowa klasa z metodami virtualnymi  do Polimorfizmu - nie uzupe³niamy tylko pozostawiamy tak jak jest 
public:
	virtual int calcThis() {
		return 0;
	}
	virtual void showThisCalc() {

	}
};


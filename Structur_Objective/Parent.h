#pragma once
#include <iostream>
using namespace std;
class Parent
{
	//flaga private do Hermetyzacji

private:
	string firstName;
	string lastName;

	// flaga protected do Dziedziczenia 

protected:
	int myAge;
	bool myGender;

	// flaga public do Mutatorów i akcesorów (Nadpisanie konstruktora bez argumentowego , argumentowym)

public:
	Parent(){}
	Parent(string f, string l) {
		this->firstName = f;
		this->lastName = l;
	}

	//mutator

	void setFirstName(string f) {
		this->firstName = f;
	}

	//akcesor

	string getFirstName() {
		return this->firstName;
	}
};




#include <iostream>
using namespace std;



// nowa funkcja argumentowa zwracana
int func(int a) {
	int res = a * a;
	return res;
}


// funkcja bezargumentowa nie zwracana
void showSomeName() {
	cout << " Hi my name is: " << endl;
}

// Jêzyk strukturlany C++

// funkcja main wyœwietlaj¹ca wszystkie instrukcje dotycz¹ce jêzyka C++

int main()
{
   // deklaracja zmiennych 
	int valueA;

   // inicjalizacja zmiennych 
	int valueSum = 0;

	// strumieñ wyjœcia

	cout << "podaj wartosc" << endl;

	// strumieñ wejœcia

	cin >> valueA;
  

	// instrukcja warunkowa IF

	if (valueA > 0) {
		valueSum += valueA;
	}
	else
	{
		cout << " nie da siê " << endl;
	}

	// pêtla for 

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	// operatory arytmetyczne
	//   + * - / >= <= < > % - modulo , += , *= , /= -= 

	// operatory logiczne
	// && - i  , || - lub , != - negacja (zaprzeczenie) - ró¿ne


	// pêtla while 
	int i = 0;
	while (i<10)
	{
		i++;
		cout << i << endl;
	}

	// odwo³anie do funkcji zwracaniej i niezwracanej

	cout << func(5) << endl;
	showSomeName();
}


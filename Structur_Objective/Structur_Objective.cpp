

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

// J�zyk strukturlany C++

// funkcja main wy�wietlaj�ca wszystkie instrukcje dotycz�ce j�zyka C++

int main()
{
   // deklaracja zmiennych 
	int valueA;

   // inicjalizacja zmiennych 
	int valueSum = 0;

	// strumie� wyj�cia

	cout << "podaj wartosc" << endl;

	// strumie� wej�cia

	cin >> valueA;
  

	// instrukcja warunkowa IF

	if (valueA > 0) {
		valueSum += valueA;
	}
	else
	{
		cout << " nie da si� " << endl;
	}

	// p�tla for 

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	// operatory arytmetyczne
	//   + * - / >= <= < > % - modulo , += , *= , /= -= 

	// operatory logiczne
	// && - i  , || - lub , != - negacja (zaprzeczenie) - r�ne


	// p�tla while 
	int i = 0;
	while (i<10)
	{
		i++;
		cout << i << endl;
	}

	// odwo�anie do funkcji zwracaniej i niezwracanej

	cout << func(5) << endl;
	showSomeName();
}


#include <iostream>
#include "Tester.h"

// miejsce na do�aczanie klas w odr�bnych plikach przez #include "nazwa.h"
using namespace std;




// J�zyk obiektowy  C++

// funkcja main przekszta�cona w metod� main

int main()
{
    // obiekt poprzez podanie referencji , dodanie klasy do #include i nazw� w�asn�

    // konstruujemy wed�ug konstruktora argumetowego obiekt , kt�ry b�dzie zawiera� dwie warto�ci

    Tester test(2, 3);

    // odwo�anie do metody wy�wietleniowej z obiektu
    test.show();

 }


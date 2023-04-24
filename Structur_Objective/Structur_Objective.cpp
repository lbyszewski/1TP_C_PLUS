#include <iostream>
#include "Tester.h"

// miejsce na do³aczanie klas w odrêbnych plikach przez #include "nazwa.h"
using namespace std;




// Jêzyk obiektowy  C++

// funkcja main przekszta³cona w metodê main

int main()
{
    // obiekt poprzez podanie referencji , dodanie klasy do #include i nazwê w³asn¹

    // konstruujemy wed³ug konstruktora argumetowego obiekt , który bêdzie zawiera³ dwie wartoœci

    Tester test(2, 3);

    // odwo³anie do metody wyœwietleniowej z obiektu
    test.show();

 }


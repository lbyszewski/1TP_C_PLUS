#include <iostream>
#include "Tester.h"
#include "Parent.h"
#include "Child.h"
#include "Base.h"
#include "ChildOne.h"
#include "ChildTwo.h"

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

    Parent p;
    Child ch;

    // mutator
    p.setFirstName("Lukasz");

    // akcesor
    p.getFirstName();


    Base b;   // obiekt klasy bazowej
    ChildOne chOne;   // obiket klasy potomnej pierwszej
    ChildTwo chTwo;   // obiket klasy potomnej drugiej


    // Dopisanie do referencji klasy bazowej wskazuj¹c na zmienn¹ i przypisuj¹c wartoœc obiektu potomka
    Base  *r1 = &chOne;   
    Base* r2 = &chTwo;

    // Odow³anie siê do metod klas potomnych na podstawie polimorfizmu

    chOne.showThisCalc();
    chTwo.showThisCalc();

    

 }


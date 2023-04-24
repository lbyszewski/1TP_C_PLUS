#include <iostream>
#include "Tester.h"
#include "Parent.h"
#include "Child.h"
#include "Base.h"
#include "ChildOne.h"
#include "ChildTwo.h"

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

    Parent p;
    Child ch;

    // mutator
    p.setFirstName("Lukasz");

    // akcesor
    p.getFirstName();


    Base b;   // obiekt klasy bazowej
    ChildOne chOne;   // obiket klasy potomnej pierwszej
    ChildTwo chTwo;   // obiket klasy potomnej drugiej


    // Dopisanie do referencji klasy bazowej wskazuj�c na zmienn� i przypisuj�c warto�c obiektu potomka
    Base  *r1 = &chOne;   
    Base* r2 = &chTwo;

    // Odow�anie si� do metod klas potomnych na podstawie polimorfizmu

    chOne.showThisCalc();
    chTwo.showThisCalc();

    

 }


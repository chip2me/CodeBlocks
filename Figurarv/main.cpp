/** Formler:

Siderne i trekant benævnes: a, b og c
De overfor stående vinkler benævnes: A, B og C

Pythagoras (udelukkende retvinklede trekanter)
c^2 = a^2 + b^2

Cosinus relationer: (alle trekanter)
a^2 = b^2 + c^2 -2bc*cos(A)
b^2 = a^2 + b^2 -2ac*cos(B)
c^2 = a^2 + b^2 -2ab*cos(C)

*/

#include <iostream>
#include "include/Triangles.h"

using namespace std;

int main()
{
double dTmp;
Triangles t;

    //Test leg A missing
    t.dSideA = 0;
    t.dSideB = 4;
    t.dSideC = 5;
    t.CalcSide(); //calc missing leg
    cout << "CalcSide a = " << t.dSideA << endl;
    cout << "CalcSide b = " << t.dSideB << endl;
    cout << "CalcSide c = " << t.dSideC << endl;
    cout << "\n";

    //Test leg B missing
    t.dSideA = 300;
    t.dSideB = 0;
    t.dSideC = 500;
    t.CalcSide(); //calc missing leg
    cout << "CalcSide a = " << t.dSideA << endl;
    cout << "CalcSide b = " << t.dSideB << endl;
    cout << "CalcSide c = " << t.dSideC << endl;
    cout << "\n";

    //Test leg C missing
    t.dSideA = 3;
    t.dSideB = 4;
    t.dSideC = 0;
    t.CalcSide(); //calc missing leg
    cout << "CalcSide a = " << t.dSideA << endl;
    cout << "CalcSide b = " << t.dSideB << endl;
    cout << "CalcSide c = " << t.dSideC << endl;
    cout << "\n";

    //Test new function with private members
    dTmp = t.Calc(3, 4, 0, -1, -1, -1 );
    cout << "Input: Calc a = " << t.dSideA << endl;
    cout << "Input: Calc b = " << t.dSideB << endl;
    cout << "Calculated: Calc c = " << dTmp << endl;
    cout << "\n";


    return 0;
}


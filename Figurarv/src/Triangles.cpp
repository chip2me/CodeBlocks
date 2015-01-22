#include <math.h>
#include "../include/Triangles.h"

//constructor
Triangles::Triangles()
{
    //ctor
    dSideA = 0;
    dSideB = 0;
    dSideC = 0;

}

//destructor
Triangles::~Triangles()
{
    //dtor
}

double Triangles::CalcC()
{
    double dTmp;
    //Formel er a^2 + b^2 = c^2
    dTmp = pow(dSideA, 2) + pow(dSideB, 2);
    dSideC = sqrt(dTmp);
    return dSideC;
}

double Triangles::CalcA()
{
    double dTmp;
    //Formel er a^2 + b^2 = c^2
    dTmp = pow(dSideC, 2) - pow(dSideB, 2);
    dSideA = sqrt(dTmp);
    return dSideA;
}

double Triangles::CalcB()
{
    double dTmp;
    //Formel er a^2 + b^2 = c^2
    dTmp = pow(dSideC, 2) - pow(dSideA, 2);
    dSideB = sqrt(dTmp);
    return dSideB;
}



double Triangles::CalcSide()
{
    double dTmp;

    if (dSideA == 0)
    {
        dTmp = CalcA();
    }

    if (dSideB == 0)
    {
        dTmp = CalcB();
    }

    if (dSideC == 0)
    {
        dTmp = CalcC();
    }

    return dTmp;
}


/**
Calculate missing values, if three values are given.
 I første omgang laves funktionen udelukkende med den simple pytagoras.
 Udbygges senere ...
 Ved at benytte denne funktion kan public members slettes. A, B, C og a, b, c
*/
double Triangles::Calc(double dSideA, double dSideB, double dSideC, double dAngleA, double dAngleB, double dAngleC )
{
    double dTmp;

    if (dSideA == 0)
    {
        dTmp = CalcA();
    }

    if (dSideB == 0)
    {
        dTmp = CalcB();
    }

    if (dSideC == 0)
    {
        dTmp = CalcC();
    }

    return dTmp;
}


#ifndef TRIANGLES_H
#define TRIANGLES_H


class Triangles
{
public:
    Triangles();
    virtual ~Triangles();

    double CalcSide();
    double Calc(double dSideA, double dSideB, double dSideC, double dAngleA, double dAngleB, double dAngleC );

    double dSideA, dSideB, dSideC; //
    double dAngleA, dAngleB, dAngleC; //

protected:

private:
    double CalcA();
    double CalcB();
    double CalcC();
};

#endif // TRIANGLES_H

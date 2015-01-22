#include <iostream>

using namespace std;


struct animal{
int ko;
int gris;
int abe;
};

/** \brief main function - test console coding via Code::Blocks (First try!)
 *
 * \param None
 * \return None
 *
 */
int main()
{
struct animal a;

    //Iniy data
    a.abe = 2;
    a.gris = 2;
    a.ko = 3;

    cout << "Hello CM world!\n" << endl;
    cout << "Animal description:" << endl;
    cout << "Ko:" << a.ko << endl;
    cout << "Abe:" << a.abe << endl;
    cout << "Gris:" << a.gris << endl;
    return 0;
}

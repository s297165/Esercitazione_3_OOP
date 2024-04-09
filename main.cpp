#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexLibrary;

int main()
{
    double a= 2.9;
    double b= 3.1;
    ComplexNumber c(a,b);
    ComplexNumber d=c.coniug();
    cout <<"c: " << c << endl;
    cout << "il coniugato di c e' d: "<< d<< endl;
    cout << "c + d: "<< c+d <<endl;

    cout<< "c == d : " << (c==d) << endl;

    return 0;
}

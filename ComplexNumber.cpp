#include "ComplexNumber.hpp"
#include <iostream>
using namespace std;

namespace ComplexLibrary{

ComplexNumber ComplexNumber::coniug()
{
    double reale = real;
    double immaginario = -imaginary;
    return ComplexNumber(reale, immaginario);

}
ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if (c.imaginary < 0)
    {
        os  << c.real << c.imaginary << "i";
    }
    else
    {
        os  << c.real << "+" << c.imaginary << "i";
    }
    return os;
}

ComplexNumber operator + (const ComplexNumber& c1, const ComplexNumber& c2)
{
    double reale = c1.real + c2.real;
    double immaginario= c1.imaginary + c2.imaginary;
    return ComplexNumber(reale,immaginario);
}

bool operator == (const ComplexNumber& c1, const ComplexNumber& c2)
{
    bool s;
    if ( (c1.real == c2.real) & (c1.imaginary ==c2.imaginary))
    {
        s=true;
    }
    else
    {
        s=false;
    }
    return s;
}

}


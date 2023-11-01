/*
CH-230-A
a10_p8.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;
//constructors
//default
Complex::Complex()
{
    //cout << "Calling default constructor\n";
    real = 0;
    imaginary = 0;
    //initialize the parts with 0
}

//properties with specific values
Complex::Complex(int r, int i)
{
    //cout << "Calling specific constructor\n";
    real = r;
    imaginary = i;
}
//copy constructor
Complex::Complex(const Complex& src)
{
    //cout << "Calling copy constructor\n";
    real = src.real;
    imaginary = src.imaginary;
}
    
//destructor
Complex::~Complex()
{
    //empty
}	


// setters
void Complex::setReal(int r)
{
    real = r;
}

void Complex::setImaginary(int i)
{
    imaginary = i;
}

// getters
int Complex::getReal()
{
    return real;
}

int Complex::getImaginary()
{
    return imaginary;
}

//conjugation
Complex Complex::conj()
{
    Complex conjugate;
    conjugate.real = real;
    conjugate.imaginary = - imaginary;
    return conjugate;
}

//adding,substracting and multiplying
Complex Complex::add(Complex x)
{
    Complex result;
    result.real = real + x.real;
    result.imaginary = imaginary + x.imaginary;
    return result;
}

Complex Complex::sub(Complex x)
{
    Complex result;
    result.real = real - x.real;
    result.imaginary = imaginary - x.imaginary;
    return result;
}

Complex Complex::mult(Complex x)
{
    Complex result;
    result.real = real * x.real - imaginary * x.imaginary;
    result.imaginary = imaginary * x.real + real * x.imaginary;
    return result;
}
// service method 
void Complex::print()
{
    cout << real;
    if( imaginary < 0 )
    {
        cout << " - " << -imaginary << "i\n";
    }
    else
        cout << " + " << imaginary << "i\n";

}

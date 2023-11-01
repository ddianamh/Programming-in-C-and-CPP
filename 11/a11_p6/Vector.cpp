/*
CH-230-A
a11_p6.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Vector.h"
using namespace std;

//default constructor
Vector::Vector()
{
    size = 0;
    ptr = NULL;
}

//copy constructor
Vector::Vector( const Vector& src )
{
    size = src.size;
    ptr = new double[src.size];
    for(int i = 0; i < size; i++)
        ptr[i] = src.ptr[i];
}

//value constructor
Vector::Vector( int newsize, double *newptr )
{
    size = newsize;
    ptr = new double[size];
    for(int i = 0; i < size; i++)
        ptr[i] = newptr[i];
}

//destructor
Vector::~Vector( )
{
    delete [] ptr;
    //deallocating
}

//setters
void Vector::setSize( int newsize )
{
    size = newsize;
}

void Vector::setPtr( double *newptr )
{
    ptr = newptr;
}

//getters
int Vector::getSize()
{
    return size;
}

double Vector::getPtr()
{
    return *ptr;
}

//service
void Vector::print()
{
    for(int i = 0; i < size; i++ )
    {
        cout << *(ptr+i) << " ";
    }
}

//norm
double Vector :: norm()
{
    double n;
    for( int i = 0; i < size; i++ )
    {
        n = n + ptr[i] * ptr[i];
    }
    n = sqrt( n );
    return n;
}

//addition
Vector Vector :: add(const Vector v) const
{
    Vector result = Vector( size, ptr);
    for(int i = 0; i < size; i++ )
    {
        result.ptr[i] = ptr[i] + v.ptr[i];
    }
    return result;
}

//difference
Vector Vector :: sub(const Vector v) const
{
    Vector result = Vector( size, ptr);
    for(int i = 0; i < size; i++ )
    {
        result.ptr[i] = ptr[i] - v.ptr[i];
    }
    return result;
}

//scalar product
double Vector :: scalar_product(const Vector v) const
{
    double p = 0;
    for(int i = 0; i < size; i++ )
    {
        p = p + ptr[i] * v.ptr[i];
    }
    return p;
}

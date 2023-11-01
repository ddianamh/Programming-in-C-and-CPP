/*
CH-230-A
a12_p5.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
    //getting the minimum between a and b
    int minab;
    if( a < b )
        minab = a;
    else
        minab = b;
    //going from 1 to minab and looking for the biggest divisor
    for( int i = 1; i <= minab; i++ )
    {
        if( a % i == 0 && b % i == 0 )
            tmp_gcd = i;
    }
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

//printing operator
std::ostream& operator<<( std::ostream& out, const Fraction& f )
{
	out << f.num << "/" << f.den << "\n";
	return out;
}

//reading operator
std::istream& operator>>( std::istream& in, Fraction &f )
{
	int n, d;
	in >> n >> d;
	f.num = n;
	f.den = d;
	return in;
}
//multiplication operator
Fraction operator*( Fraction f1, Fraction f2)
{
	Fraction result;
	result.num = f1.num * f2.num;
	result.den = f1.den * f2.den;
	return result;
}
//division operator
Fraction operator/( Fraction f1, Fraction f2)
{
	Fraction result;
	result.num = f1.num * f2.den;
	result.den = f1.den * f2.num;
	return result;
}

//addition operator
Fraction operator+( Fraction f1, Fraction f2)
{
    Fraction result;
    int L;
    L = f1.lcm( f1.den, f2.den );
	result.num = f1.num * L / f1.den + f2.num * L / f2.den;
	result.den = L;
	return result;
}

//subtraction operator
Fraction operator-( Fraction f1, Fraction f2)
{
    Fraction result;
    int L;
    L = f1.lcm( f1.den, f2.den );
	result.num = f1.num * L / f1.den - f2.num * L / f2.den;
	result.den = L;
	return result;
}

//assigning operator
Fraction& Fraction::operator=(const Fraction &f) 
{
	this->num = f.num;
	this->den = f.den;
	return *this;
}

//< operator
bool operator<( Fraction f1, Fraction f2)
{
    //if the difference is <0 then it is true
    //the denominator is always positive so just the numerator
    //needs to be checked
    if( (f1-f2).num < 0 )
        return 1;
    else
        return 0;

}
bool operator>( Fraction f1, Fraction f2)
{
    //if the difference is >0 then it is true
    //the denominator is always positive so just the numerator
    //needs to be checked
    if( (f1-f2).num > 0 )
        return 1;
    else
        return 0;

}
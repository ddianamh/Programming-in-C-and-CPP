/*
CH-230-A
a12_p4.cpp
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

	// Implement GCD of two numbers;

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
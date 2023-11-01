/*
CH-230-A
a10_p8.h 
Diana Harambas 
dharambas@jacobs-university.de
*/

class Complex
{
private:
    int real;
    int imaginary;

public:
    //constructors
    //default
    Complex();
    //properties with specific values
    Complex(int real, int imaginary);
    //copy constructor
    Complex(const Complex&);
    
    //destructor
    ~Complex();	

    // setters
	void setReal(int newreal);
	void setImaginary(int newimaginary);

	// getters
	int getReal();
	int getImaginary();

    //conjugation
    Complex conj();

    //adding,substracting and multiplying
    Complex add(Complex);
    Complex sub(Complex);
    Complex mult(Complex);

    // service method 
	void print();
};
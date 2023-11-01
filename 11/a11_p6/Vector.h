/*
CH-230-A
a11_p6.h
Diana Harambas
dharambas@jacobs-university.de
*/


#ifndef __VECTOR_H
#define __VECTOR_H

class Vector
{
    private:
        int size;
        double *ptr;
    public:
    //constructors
    Vector();
    Vector(int, double *);
    Vector(const Vector&);
    //destructor
    ~Vector();
    //setters
    void setSize(int);
    void setPtr(double *);
    //getters
    int getSize();
    double getPtr();
    //service method
    void print();
    //vector methods
    double norm();
    Vector add(const Vector) const;
    Vector sub(const Vector) const;
    double scalar_product(const Vector) const;
};
#endif
/*
CH-230-A
a10_p3.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <string> // defines standard C++ string class

class City
{
private:  // data members are private
	std::string name;
    int inhabitants;
    double area;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setInhabitants(int newinhabitants);
	void setArea(double newarea);
	// getter method
	std::string getName();
    int getInhabitants();
    double getArea();
	// service method
	void print();
};

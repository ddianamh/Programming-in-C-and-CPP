/*
CH-230-A
a10_p2.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	int hunger;
	int boredom;
	double height;
    std::string name;
    //adding weight and tiredness
    double weight;
    int tiredness;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    //setters for weight and tiredness as well
    void setWeight(double newweight);
    void setTiredness(int newtiredness);
	// getter method
	int getHunger();
    //getters for weight and tiredness
    double getWeight();
    int getTiredness();
	// service method
	void print();
};

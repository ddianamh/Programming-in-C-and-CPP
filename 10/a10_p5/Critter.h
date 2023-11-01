/*
CH-230-A
a10_p5.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
    //constructors

    //1 empty constructor, for default
    Critter();

    //2 constructor taking the name
    Critter( std::string newname);

    //3 constructor with name, hunger, boredom, height
    //height here defaults as 10
    Critter( std::string newname, int newhunger, 
            int newboredom, double newheight = 10);

    //destructor
	~Critter();
    
    //changing type methods
    double numberdouble( int a );
    int numberint( double a );
   
	//setters, getters, service methods
    void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(double newheight);
	int getHunger();
    int getBoredom();
    double getHeight();
	void print();
};
/*
CH-230-A
a10_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <string> 

class Critter
{
private: 
	std::string name;
	int hunger;
	int boredom;
	double height;

public: 
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
    
    //setters, getters, methods
    void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(double newheight);
	int getHunger();
    int getBoredom();
    double getHeight();
	void print();
};
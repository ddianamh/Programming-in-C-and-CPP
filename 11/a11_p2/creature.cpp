/*
CH-230-A
a11_p2.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/


#include <iostream>

using namespace std;

class Creature 
{
	public:
		Creature();  
        ~Creature(); 
		void run() const;

	protected:
		int distance;
};

//added messages for creature and wizard constr and destr as well

Creature::Creature(): distance(10)
{
    cout << "Creature constructor called\n";
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature()
{
    cout << "Creature destructor called\n";
} 

class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor called\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "Wizard destructor called\n";
}

//first new creature type
class Unicorn : public Creature
{
    public:
        Unicorn();
        ~Unicorn();
        void time() const;

    private:
        int speed;
};

Unicorn::Unicorn() : speed(50)
{
    cout << "Unicorn constructor called \n";
}  

void Unicorn::time() const
{
    cout << "time of the journey = ";
    double time;
    time = ((double) distance) / ((double) speed);
    cout << time << " seconds\n";
}

Unicorn::~Unicorn() 
{
    cout << "Unicorn destructor called\n";
}

//second new creature type
class Mermaid : public Creature
{
    public:
        Mermaid();
        ~Mermaid();
        void weightloss() const;
        //loses weight while travelling a distance
        //literally no inspiration sorry

    private:
        double weightFactor;
};

Mermaid::Mermaid() : weightFactor(0.1)
{
    cout << "Mermaid constructor called \n";
}  

void Mermaid::weightloss() const
{
    cout << "the weight lost = ";
    double wl;
    wl = distance * weightFactor;
    cout << wl << " kg\n";
}

Mermaid::~Mermaid() 
{
    cout << "Mermaid destructor called\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u;
    u.run();
    u.time();

    cout << "\nCreating a Mermaid.\n";
    //this is a better, improved mermaid that can *run*
    Mermaid m = Mermaid();
    m.run();
    m.weightloss();

    cout << endl;
    return 0;
} 
/*
CH-230-A
a11_p4.h
Diana Harambas 
dharambas@jacobs-university.de
*/

class Creature 
{
	public:
		Creature();  
        ~Creature(); 
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

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
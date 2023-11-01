/*
CH-230-A
a11_p1.h
Diana Harambas
dharambas@jacobs-university.de
*/

class Box
{
    private:
        double height;
        double width;
        double depth;
    
    public:
        //setters
        void setHeight( double h );
        void setWidth( double w );
        void setDepth( double d );
         
        //getters
        double getHeight();
        double getWidth();
        double getDepth();

        //constructors
        //default
        Box();
        //copy
        Box(const Box&);
        //data members 
        Box(double h, double w, double d);

        //destructor
        ~Box();
};
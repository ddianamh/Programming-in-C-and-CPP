/*
CH-230-A
a12_p3.h
Diana Harambas
dharambas@jacobs-university.de
*/
#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H
#include <cstring>
using namespace std;

class TournamentMember
{
    private:
    char firstName[36];
    char lastName[36];
    char birth[11];
    string role;
    static string location;
    int salary;
    double height;

    public:
    //constructors
    TournamentMember();
    TournamentMember( const TournamentMember&);
    TournamentMember( char f[], char l[], char b[], 
                    string r, int s, double h );
    //destructor
    ~TournamentMember();
    //setters
    void setFirstName( char f[] );
    void setLastName( char l[] );
    void setBirth( char b[] );
    void setRole( string r );
    void setSalary( int s );
    void setHeight( double h );
    static void setLocation( string l );
    //getters
    const char * getFirstName() const;
    const char * getLastName() const;
    const char * getBirth() const;
    string getRole() const;
    int getSalary() const;
    double getHeight() const;
    string getLocation() const;
    //service method
    void print();
    //change location function
    void changeLocation( string loc );
};

class Player : public TournamentMember
{
    private:
    int number;
    string position;
    int goals;
    bool foot;  //this is 1 when the player is left-footed
                //and 0 if the player is right-footed

    public: 
    //constructors
    Player();
    Player( const Player& );
    Player( char f[], char l[], char b[], 
            string r, int s, double h,
            int n, string p, int g, bool fo);
    //destructor
    ~Player();
    //setters
    void setNumber( int n );
    void setPosition( string p );
    void setFoot( bool f );
    //getters
    int getNumber() const;
    string getPosition() const;
    int getGoals() const;
    bool getFoot() const;
    //other methods
    void pprint() const;
    void incrementGoals();
    //change location method
};


//inline setters
inline void TournamentMember::setFirstName( char f[] )
{
    strcpy(firstName, f);
}

inline void TournamentMember::setLastName( char l[] )
{
    strcpy(lastName, l);
}
inline void TournamentMember::setBirth( char b[] )
{
    strcpy(birth, b);
}
inline void TournamentMember::setRole( string r )
{
    role = r;
}
inline void TournamentMember::setSalary( int s )
{
    salary = s;
}
inline void TournamentMember::setHeight( double h )
{
    height = h;
}
inline void TournamentMember::setLocation( string l )
{
    location = l;
}


//inline getters
inline const char * TournamentMember::getFirstName() const
{
    return firstName;
}
inline const char * TournamentMember::getLastName() const
{
    return lastName;
}
inline const char * TournamentMember::getBirth() const
{
    return birth;
}
inline string TournamentMember::getRole() const
{
    return role;
}
inline int TournamentMember::getSalary() const
{
    return salary;
}
inline double TournamentMember::getHeight() const
{
    return height;
}
inline string TournamentMember::getLocation() const
{
    return location;
}


//inline setters for Player

inline void Player::setNumber( int n )
{
    number = n;
}
inline void Player::setPosition( string p )
{
    position = p;
}
inline void Player::setFoot( bool f )
{
    foot = f;
}

//inline getters for Player
inline int Player::getNumber() const
{
    return number;
}
inline string Player::getPosition() const
{
    return position;
}
inline int Player::getGoals() const
{
    return goals;
}
inline bool Player::getFoot() const
{
    return foot;
}

#endif
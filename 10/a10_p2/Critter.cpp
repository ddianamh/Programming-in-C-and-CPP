/*
CH-230-A
a10_p2.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

//using namespace std;

void Critter::setName(std::string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setWeight(double newweight) {
    weight = newweight;
}

void Critter::setTiredness(int newtiredness) {
    tiredness = newtiredness;
}

void Critter::print() {
	std::cout << "I am " << name << ". My hunger level is " << hunger << ".";
    std::cout << " My weight is " << weight << " and my tiredness level is ";
    std::cout << tiredness << "." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getWeight() {
	return weight;
}

int Critter::getTiredness() {
	return tiredness;
}
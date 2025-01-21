#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "voiture.h"

class Location {
    private:
        Voiture voitureLouee;
        std::string nomLocataire;
    
    public:
        Location();  // Default constructor
        Location(Voiture v, std::string nom);  // Parameterized constructor
        friend std::ostream& operator<<(std::ostream& out, const Location& loc);
};

#endif

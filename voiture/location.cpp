#include<iostream>
#include<string>
#include "voiture.cpp"
#include "location.h"

using namespace std;

class Location {
    private:
        Voiture voitureLouee;
        string nomLocataire;
    
    public:
        // Default constructor
        Location::Location() {
            nomLocataire = "";
        }
        
        // Parameterized constructor
        Location::Location(Voiture v, string nom) {
            voitureLouee = v;
            nomLocataire = nom;
        }
        
        // Operator overloading for displaying rental details
        friend ostream& operator<<(ostream& out, const Location& loc) {
            out << "Locataire: " << loc.nomLocataire << endl;
            out << "Details de la voiture: " << loc.voitureLouee;
            return out;
        }
};

// Default constructor
Location::Location() {
    nomLocataire = "";
}

// Parameterized constructor
Location::Location(Voiture v, string nom) {
    voitureLouee = v;
    nomLocataire = nom;
}

// Operator overloading for displaying rental details
ostream& operator<<(ostream& out, const Location& loc) {
    out << "Locataire: " << loc.nomLocataire << endl;
    out << "Details de la voiture: " << loc.voitureLouee;
    return out;
}

#include<iostream>
#include<string>
#include "voiture.h"

using namespace std;

// Default constructor
Voiture::Voiture() {
    marque = "";
    modele = "";
}

// Parameterized constructor
Voiture::Voiture(string m, string mod) {
    marque = m;
    modele = mod;
}

// Operator overloading for displaying car details
ostream& operator<<(ostream& out, const Voiture& v) {
    out << "Marque: " << v.marque << ", Modele: " << v.modele;
    return out;
}
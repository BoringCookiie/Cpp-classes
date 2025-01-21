#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>
#include <string>

class Voiture {
    private:
        std::string marque;
        std::string modele;
    
    public:
        Voiture();  // Default constructor
        Voiture(std::string m, std::string mod);  // Parameterized constructor
        friend std::ostream& operator<<(std::ostream& out, const Voiture& v);
};

#endif

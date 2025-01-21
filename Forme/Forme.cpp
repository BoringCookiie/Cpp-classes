#include <iostream>
using namespace std;

class Forme {
public:
    virtual double aire() const = 0; // Fonction virtuelle pure
    virtual ~Forme() {} // Destructeur virtuel
};

class Rectangle : public Forme {
private:
    double longueur;
    double largeur;

public:
    Rectangle() : longueur(0), largeur(0) {} // Constructeur par défaut

    Rectangle(double l, double L) : longueur(l), largeur(L) {} // Constructeur paramétré

    double aire() const override { // Redéfinition de la fonction aire
        return longueur * largeur;
    }

    // Surcharge de l'opérateur <<
    friend ostream& operator<<(ostream& os, const Rectangle& rect) {
        os << "Rectangle [Longueur: " << rect.longueur 
           << ", Largeur: " << rect.largeur 
           << ", Aire: " << rect.aire() << "]";
        return os;
    }
};

int main() {
    Rectangle rect(5.0, 3.0); // Création d'un rectangle
    cout << rect << endl;     // Affichage
  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class ArticleBibliotheque {
protected:
    string auteur;
    string titre;
    float prix;

public:
    // Default Constructor
    ArticleBibliotheque() : auteur("Unknown"), titre("Unknown"), prix(0.0f) {}

    // Parameterized Constructor
    ArticleBibliotheque(string a, string t, float p) : auteur(a), titre(t), prix(p) {}

    // Display Function
    void afficher() const {
        cout << "Auteur: " << auteur << ", Titre: " << titre << ", Prix: " << prix << " DH" << endl;
    }
};
class Livre : public ArticleBibliotheque {
private:
    string genre;

public:
    // Default Constructor
    Livre() : ArticleBibliotheque(), genre("Unknown") {}

    // Parameterized Constructor
    Livre(string a, string t, float p, string g) : ArticleBibliotheque(a, t, p), genre(g) {}

    // Overloading Display Function
    void afficher() const {
        ArticleBibliotheque::afficher();
        cout << "Genre: " << genre << endl;
    }

    // Overloaded Operator >>
    friend istream& operator>>(istream& in, Livre& l) {
        cout << "Saisir l'auteur: ";
        in >> l.auteur;
        cout << "Saisir le titre: ";
        in >> l.titre;
        cout << "Saisir le prix: ";
        in >> l.prix;
        cout << "Saisir le genre: ";
        in >> l.genre;
        return in;
    }
};
int main() {
    // Object with default constructor
    Livre livre1;
    livre1.afficher();

    // Object with parameterized constructor
    Livre livre2("Victor Hugo", "Les Misérables", 120.0f, "Classique");
    livre2.afficher();

    // Object using overloaded >> operator
    Livre livre3;
    cin >> livre3;
    livre3.afficher();

    return 0;
}

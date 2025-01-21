#include <iostream>
#include "location.h"

using namespace std;

int main() {
    // Create a car instance with example data
    Voiture voiture("Toyota", "Corolla");
    
    // Create a rental instance using the car and example data
    Location location(voiture, "John Doe");
    
    // Display the rental information (which includes car details)
    cout << location << endl;
    
    return 0;
}

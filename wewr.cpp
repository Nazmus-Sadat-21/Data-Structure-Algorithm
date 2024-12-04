#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265359;

int main() {
    int numPlanets;
    double totalDensity = 0.0;

    cout << "Enter the number of planets in the solar system: ";
    cin >> numPlanets;

    for (int i = 0; i < numPlanets; i++) {
        double mass, diameter;
        cout << "Enter the mass (in kilograms) for planet " << (i + 1) << ": ";
        cin >> mass;
        cout << "Enter the diameter (in meters) for planet " << (i + 1) << ": ";
        cin >> diameter;

        // Calculate the volume of the planet (assuming it's a sphere)
        double volume = (4.0 / 3.0) * PI * pow((diameter / 2.0), 3);

        // Calculate the density
        double density = mass / volume;

        totalDensity += density;
    }

    if (numPlanets > 0) {
        double averageDensity = totalDensity / numPlanets;
        cout << "The average density of all planets is: " << averageDensity << " kg/m^3." << endl;
    } else {
        cout << "No planets entered, cannot calculate the average density." << endl;
    }

    return 0;
}

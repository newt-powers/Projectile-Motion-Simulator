//defines input and output stream objects
#include <iostream>
#include "src/Projectile.cpp"
//identifiers of the standard C++ library
using namespace std;

/**
 * The main program for the projectile motion simulator.
*/
class Main {
    public:
        /**
         * Calculate the projectile properties.
        */
        int main() {
            /**Speed of the projectile.*/
            double speed;
            /**Angle of the projectile.*/
            double angle;
            //Ask user to input speed and angle
            std::cout << "Enter the projectile's speed in meters per second: ";
            std::cin >> speed;
            std::cout << "Enter the projectile's angle in degrees: ";
            std::cin >> angle;
            //Create a Projectile object with said speed and angle
            Projectile p {speed, angle};
            //Calculate and print the distance, time, and apex
            std::cout << "Distance: " << p.distanceNum() << " meters\n";
            std::cout << "Apex: " << p.apexNum() << " meters\n";
            std::cout << "Time: " << p.timeNum() << " seconds\n";
            return 0;
        }
};
#include <iostream>
using namespace std;

/**The initial height of the projectile, which is always 0 meters above the ground.*/
#define initialHeight 0.0
/**The gravitational acceleration due to Earth, which is always 9.81 m/s^2.*/
#define gravity -9.81

/**
 * The projectile launched in the projectile motion simulator.
*/
class Projectile {
    /**The initial speed of the projectile in m/s. Requires: 'initialSpeed' is non-negative.*/
    double initialSpeed;
    /**The angle above the ground the projectile is pointed. Requires: 'angle' is from 0.0 to 90.0 degrees*/
    double angle;
    /**The mass of the projectile in kg. Requires: 'mass' is non-negative.*/
    double mass;
    /**The horizontal distance the projectile traveled in m.*/
    double distance;
    /**The time the projectile is off the ground in s.*/
    double time;
    /**The apex of the projectile in m.*/
    double apex;

    private:
        /**
         * Assert that this object satisfies its class invariants.
        */
        void assertInv() {
            assert(initialSpeed > 0);
            assert(angle >= 0 && angle <= 90);
            assert(mass >= 0);
        }

    public:
        /**
         * Create a new Projectile with initial speed 'initSpeed', angle 'ang', and mass 'mas'. 
         * Requires: initSpeed, ang, and mas are non-empty.
        */
        Projectile(double initSpeed, double ang, double mas) {
            //assign global variables given inputs
            initialSpeed = initSpeed;
            angle = ang;
            mass = mas;
        }

        //function declarations
};

//proceding functions relating to the projectile properties
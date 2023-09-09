#include <iostream>
using namespace std;

/**The initial height of the projectile, which is always 0 meters above the ground.*/
#define initialHeight 0.0
/**The initial horizontal position of the projectile, which is always 0 meters from the point of launch.*/
#define initialHorizontalPosition 0.0
/**The gravitational acceleration due to Earth, which is always 9.81 m/s^2.*/
#define g -9.81

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
            assertInv();
        }

        //Create three methods for the outputs for access in Main.cpp when displaying results
        /**
         * Return the horizontal distance the projectile traveled before hitting the ground.
        */
        double distance() {
            return distance;
        }

        /**
         * Return the time taken during projectile motion.
        */
        double time() {
            return time;
        }

        /**
         * Return the highest point of the projectile.
        */
        double apex() {
            return apex;
        }

        /**
         * Calculate the projectile properties.
        */
        int main() {
            //horizontal motion
            //v0x = vx
            //use y = y0 + v0y(t) - (1/2)g(t^2) to find t where t is not 0
            //then, use x = x0 + vx(t) to find x, the total horizontal distance
            //vy = 0 at apex
            //now, use vy^2 = v0y^2 - 2g(y-y0) to find the apex, y
            return 0;
        }

        //Create three helper methhods for the horizontal and vertical components of the speed and the total time, distance, and apex

};


#include <iostream>
#include <math.h>
using namespace std;

/**The initial height of the projectile, which is always 0 meters above the ground.*/
#define initialHeight 0.0
/**The initial horizontal position of the projectile, which is always 0 meters from the point of launch.*/
#define initialHorizontalPosition 0.0
/**The gravitational acceleration due to Earth, which is always 9.81 m/s^2.*/
#define g 9.81

/**
 * The projectile launched in the projectile motion simulator.
*/
class Projectile {
    /**The initial speed of the projectile in m/s. Requires: 'initialSpeed' is non-negative.*/
    double initialSpeed;
    /**The angle above the ground the projectile is pointed. Requires: 'angle' is from 0.0 to 90.0 degrees*/
    double angle;
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
        }

        /**
         * Return the horizontal component of the 'initialSpeed'.
        */
        double x() {
            return initialSpeed * cos((2*acos(0.0))*(1/180.0)*angle);
        }

        /**
         * Return the vertical component of the 'initialSpeed'.
        */
        double y() {
            return initialSpeed * sin((2*acos(0.0))*(1/180.0)*angle);
        }

        /**
         * Calculate the properties of the projectile motion including distance, time, and apex.
        */
       void calculateProperties() {
            //horizontal motion, v0x = vx
            /**The initial horizontal speed.*/
            double initXSpeed = x();
            /**The inital vertical speed.*/
            double initYSpeed = y();
            //use y = y0 + v0y(t) - (1/2)g(t^2) to find t where t is not 0
            //t = 0, t = v0y*2/g
            time = (initYSpeed * 2)/g;
            //then, use x = x0 + vx(t) to find x, the total horizontal distance
            distance = initialHorizontalPosition + initXSpeed * time;
            //now, use vy^2 = v0y^2 - 2g(y-y0) to find the apex, y
            //vy = 0 at apex
            apex = (pow(initYSpeed, 2))/(2*g) + initialHeight;
       }

    public:
        /**
         * Create a new Projectile with initial speed 'initSpeed' and angle 'ang'. 
         * Require: initSpeed, ang are non-empty.
        */
        Projectile(double initSpeed, double ang) {
            //assign global variables given inputs
            initialSpeed = initSpeed;
            angle = ang;
            calculateProperties();
            assertInv();
        }

        //Create three methods for the outputs for access in Main.cpp when displaying results
        /**
         * Return the horizontal distance the projectile traveled before hitting the ground.
        */
        double distanceNum() {
            //can't have method and variables have same name
            return distance;
        }

        /**
         * Return the time taken during projectile motion.
        */
        double timeNum() {
            return time;
        }

        /**
         * Return the highest point of the projectile.
        */
        double apexNum() {
            return apex;
        }

};


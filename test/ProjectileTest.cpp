#include <iostream>
//for numerical computations
#include <math.h>
#include <cmath>
#include <numbers>
#include "../src/Projectile.cpp"
//for unit testing
#include "../googletest/googletest/include/gtest/gtest.h"
using namespace std;

/**The gravitational acceleration due to Earth, which is always 9.81 m/s^2.*/
#define g 9.81

/**
 * A class testing the Projectile functionality
*/
class ProjectileTest {
    /**The number pi*/
    double pi = 2*acos(0.0);

    void testDistance() {
        Projectile p {2, sin(pi/6)};
        EXPECT_TRUE(p.distanceNum() == (1.0/(4.905))*(sqrt(3)));
    }

    void testApex() {
        Projectile p {2, sin(pi/6)};
        EXPECT_TRUE(p.apexNum() == (1/(2*g)));
    }
    
    void testTime() {
        Projectile p {2, sin(pi/6)};
        EXPECT_TRUE(p.timeNum() == (1/(4.905)));
    }
};
#include "question2.h"

bool test_config()
{
    return true;
}

double get_kinetic_energy(double mass, double velocity)
{
    double energy = velocity * velocity * mass * double (.5);
    return energy;
} //should work with decimals
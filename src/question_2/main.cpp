#include "question2.h"

int main()
{
    double mass; double velocity; double energy; double total_energy; int menu_selection;

    do {
        cout<<"What is the object's mass in kilograms? ";
        cin>>mass;
        cout<<"What is the object's velocity in meters per second? ";
        cin>>velocity;

        total_energy = get_kinetic_energy(mass, velocity);
        cout<<"Total energy: "<<total_energy<<" joules.";

        cout<<"\nCalculate kinetic energy again? Enter 1 for yes, anything else for no.\n";
        cin>>menu_selection;

    } while (menu_selection == 1);

    return 0;
}
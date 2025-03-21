#include <iostream>
#include <cmath>
#include "functions.h"

using namespace std;

int main(){
	
	double Vi, angle, mass, tau, obj, Cd, rad, diameter;
	double const g = 9.81;
	
	cout << " -------------------------------------------------------------------------------" << endl;
	cout << "|                       Projectile Motion Calculator 2.0                        |" << endl;
	cout << "|            NB: Calculations are made under real-world conditions              |" << endl;
	cout << "|        Therefore, air resistance and other factors are considered.            |" << endl;
	cout << " -------------------------------------------------------------------------------" << endl; 
	
	cout << "For now, we will analyze cases where the projectile is launched:\n"
		 << "  - From the ground (initial height  = 0)\n\n";

	cout << "Select the projectile to be used in this simulation\n";
	cout << "   1. Spherical Object          2. Missile\n";
	cin >> obj;
		 
	cout << "\nEnter the values for the following parameters:\n";
	cout << "  - Initial Velocity (m/s): ";
	cin >> Vi;
	cout << "  - Launch Angle (degrees): ";
	cin >> angle;
	cout << "  - Mass of projectile (kg): ";
	cin >> mass;
	
	rad = angle * (M_PI / 180);
	
	if(obj == 1){
		cout << "  - Diameter of projectile (D): ";
		cin >> diameter;
		Cd = 0.47;
		tau = mass/(0.224 * diameter);
		
		time(Vi, rad, tau);
		max_height(Vi, rad, tau);
		range(Vi, rad, tau);
		
	} else {
		Cd = 0.29;
		tau = mass/0.239;
		
		time(Vi, rad, tau);
		max_height(Vi, rad, tau);
		range(Vi, rad, tau);
	}
	

	
	return 0;
}

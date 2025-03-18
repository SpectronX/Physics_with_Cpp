#include <iostream>
#include <cmath>

using namespace std;


void time(double Vi, double rad, double tau){
//Function to calculate the time to reach the maximum height and time of flight.
	double T, Vy, t;
	const double g = 9.81;
	
	Vy = Vi * sin(rad);
	T = tau * log((Vy + (g * tau)) / (g * tau));
	t = T / 2;
	
	cout << "\nThe time to reach the maximum height is " << t << "s\n";
	cout << "The time of flight is " << T << "s\n";
 }
 
 void max_height(double Vi, double rad, double tau){
//Function to calculate the maximum height reached.
 	
	double T, H, Vy;
	const double g = 9.81;
	
	Vy = Vi * sin(rad);
	T = tau * log((Vy + (g * tau)) / (g * tau));
	H = (((Vi * sin(rad)) + (g * tau)) * tau * (1-exp(-T/tau))) - (g * tau * T);
	
	cout << "The maximum height reached is " << H << "m\n";
 }
 
 void range(double Vi, double rad, double tau){
 //Function to calculate the range of the projectile.
	double R, Vx, Vy, Rvac;
	const double g = 9.81;

	Vx = Vi * cos(rad);
	Vy = Vi * sin(rad);
	Rvac = (2 * Vx * Vy) / g; 
	R = Rvac * (1 - ((4 * Vy) / (3 * tau * g)));
 
	cout << "The best approximation for the range is " << R << " m\n";
 }

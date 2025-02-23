#include <iostream>
#include <cmath>

using namespace std;

void ground_launch(double init_velocity, double angle){  //This function is for when the projectile is launched from the ground.
	double angle_rad = angle * (M_PI/180.0);  //Converting the angle measure to radians.
	
	const double acc = 9.81;
	
	//Calculations to be performed.
	double t_max = (init_velocity * sin(angle_rad)) / acc;
	double t_flight = 2 * t_max;
	double max_height = (pow((init_velocity * sin(angle_rad)), 2)) / (2 * acc);
	int range = (pow(init_velocity, 2) * sin(2 * angle_rad)) / acc;
	
	double v_x = init_velocity * cos(angle_rad);
	double v_y = (init_velocity * sin(angle_rad)) - (acc * t_flight);
	double fin_velocity = sqrt((v_x * v_x) + (v_y * v_y));
	
	//What the function outputs to the user.
	cout << "\nTime to reach maximum height: " << t_max << "s\n";
    cout << "Total time of flight: " << t_flight << "s\n";
    cout << "Maximum height reached: " << max_height << "m\n";
    cout << "Range of the projectile: " << range << "m\n";
    cout << "Final velocity before impact: " << fin_velocity << " m/s\n";
}

void elevated_launch(double init_velocity, double angle, double height){ //This function is for cases where the projectile is launched from a height
	double angle_rad = angle * (M_PI/180.0); //As usual, converting the angle measure to radians.
	
	const double acc = 9.81;
	
	//Calculations to perform per the formulas defined by physics.
	double t_max = (init_velocity * sin(angle_rad)) / acc;
	double max_height = height + (pow((init_velocity * sin(angle_rad)), 2)) / (2 * acc);
	double t_flight = ((t_max * acc) + sqrt((pow((init_velocity * sin(angle_rad)), 2)) + (2 * acc * height))) / acc;
	int range = init_velocity * cos(angle_rad) * t_flight;
	
	double v_x = init_velocity * cos(angle_rad);
	double v_y = (init_velocity * sin(angle_rad)) - (acc * t_flight);
	double fin_velocity = sqrt((v_x * v_x) + (v_y * v_y));
	
	//Final output to the user.
	cout << "\nTime to reach maximum height: " << t_max << "s\n";
    cout << "Total time of flight: " << t_flight << "s\n";
    cout << "Maximum height reached: " << max_height << "m\n";
    cout << "Range of the projectile: " << range << "m\n";
    cout << "Final velocity before impact: " << fin_velocity << " m/s\n";

}

void horizontal_launch(double init_velocity, double height){ //This function is suitable for cases where the projectile is launched horizontally.
	const double acc = 9.81;
	
	//Calculation to perform for some parameters.
	double t_flight = sqrt((2 * height) / acc);
	double velocity_y = sqrt(2 * acc * height);
	double range = init_velocity * t_flight;
	double final_velocity = sqrt((pow(init_velocity, 2)) + pow(velocity_y, 2));
	double angle = atan(velocity_y/init_velocity);
	double impact_angle = angle * (180/M_PI);
	
	//Final output of results to the user.
	cout << "\nTime of flight is " << t_flight << "s\n";
	cout << "Range of the projectile: " << range << "m\n";
	cout << "Final velocity: " << final_velocity << "m/s\n";
	cout << "Angle with which the projectile hits the ground: " << impact_angle << " degrees\n";
}

int main(){
	
	int ans;
	
	cout << " -------------------------------------------------------------------------------" << endl;
	cout << "|                       Projectile Motion Calculator                            |" << endl;
	cout << "|             NB: Calculations are being made under ideal conditions            |" << endl;
	cout << "|                Air resistance is negelected in the calculations.              |" << endl;
	cout << " -------------------------------------------------------------------------------" << endl; 
	
	cout << "Choose a projectile motion case.\n"
		 << "\t1. A projectile that is launched from the ground\n"
		 << "\t2. A projectile that is launched from an elevated position\n"
		 << "\t3. A projectile that is launched horizontally\n\n"
		 << "Enter a choice (1-3): ";
		 
	cin >> ans;
	
	//The use of if functions to perform operations(using the functions) based on the user's choice of scenario.
	if (ans == 1){
		double velocity, angle;
		cout << "Enter the initial velocity and projection angle: ";
		cin >> velocity >> angle;
		ground_launch(velocity, angle);
	}
	else if(ans == 2){
		double velocity, angle, height;
		cout << "Enter the initial velocity, angle of projection and height of the platform: ";
		cin >> velocity >> angle >> height;
		elevated_launch(velocity, angle, height);
	}
	else if(ans == 3){
		double velocity, height;
		cout << "Enter the initial velocity and the height of the platform: ";
		cin >> velocity >> height;
		horizontal_launch(velocity, height);
	}
	
	return 0;
}

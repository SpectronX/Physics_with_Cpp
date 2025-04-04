#include <iostream>

using namespace std;

double first_equation(double a, double b, double c, int d){
	if(d == 1){
		return a + (b *c ); //Solution for the final velocity
	} else if (d == 2){
		return a - (b * c); //Solution for the initial velocity
	} else if (d == 3){
		return (a - b) / c; //Solution for the acceleration
	} else if(d == 4){
		return (a - b) / c; //Solution for the time.
	}
	
	return 0;
}

int main() {
    int choice;
    double initial_velocity, final_velocity, acceleration, time;

    cout << " -------------------------------------------------------------------------------" << endl;
    cout << "|                  Exploring Newton's Equations of Motion                      |" << endl;
    cout << "|     Three fundamental and widely known equations in the world of Physics.    |" << endl;
    cout << " -------------------------------------------------------------------------------\n" << endl; 

    cout << "Let's explore the first equation of motion (v = u + at).\n" << endl;

    cout << "Select the parameter to calculate for: \n";
    cout << "1. Final velocity.\n"
         << "2. Initial velocity.\n"
         << "3. Acceleration.\n"
         << "4. Time.\n";
    cout << ">> ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Initial Velocity (m/s): ";
            cin >> initial_velocity;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acceleration;
            cout << "Enter Time (s): ";
            cin >> time;
            cout << "The final velocity is " << first_equation(initial_velocity, acceleration, time, choice) << " m/s\n";
            break;
        case 2:
            cout << "Enter Final Velocity (m/s): ";
            cin >> final_velocity;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acceleration;
            cout << "Enter Time (s): ";
            cin >> time;
            cout << "The initial velocity is " << first_equation(final_velocity, acceleration, time, choice) << " m/s\n";
            break;
        case 3:
            cout << "Enter Final Velocity (m/s): ";
            cin >> final_velocity;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> initial_velocity;
            cout << "Enter Time (s): ";
            cin >> time;
            if(time == 0){
            	cout << "Error. Division by zero\n";
			} else {
            cout << "The acceleration is " << first_equation(final_velocity, initial_velocity, time, choice) << " m/s^2\n";
        	}
            break;
        case 4:
            cout << "Enter Final Velocity (m/s): ";
            cin >> final_velocity;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> initial_velocity;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acceleration;
            if(acceleration == 0){
            	cout << "Error. Division by zero\n";
			} else {
            cout << "The time is " << first_equation(final_velocity, initial_velocity, acceleration, choice) << " s\n";
        	}
            break;
        default:
            cout << "Invalid choice! Kindly restart the program.\n";
    }

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

void second_equation(double a, double b, double c, int d){
	if(d == 1){ //Solution for the displacement
		double displacement = (a * c) + (0.5 * b * pow(c, 2)); 
		cout << "The displacement is " << displacement << " m" << endl;
	} 
	else if (d == 2){ //Solution for the initial velocity
		double init_velocity = (a - (0.5 * b * pow(c, 2))) / c; 
		cout << "The initial velocity is " << init_velocity << " m/s" << endl;
	}
	else if (d == 3){ //Solution for the acceleration
		double acc = (2 * (a - (b * c))) / pow(c, 2); 
		cout << "The acceleration is " << acc << " m/s^2" << endl;
	}
	else if(d == 4){  //Solution for the time.                       
		double d1 = (b * b) - (4 * 0.5 * a * (-c)); //Calculating the discriminant.
		if(d1 < 0){
			cout << "No real solution for the time!" << endl;
		} else {
			double t1 = (-b + sqrt(d1)) / (2 * 0.5 * (-c)); 
			double t2 = (-b - sqrt(d1)) / (2 * 0.5 * (-c));
			cout << "The time is " << max(t1, t2) << " s" << endl; 
		}
	}	
}

int main() {
    cout << " -------------------------------------------------------------------------------" << endl;
    cout << "|                  Exploring Newton's Equations of Motion                      |" << endl;
    cout << "|     Three fundamental and widely known equations in the world of Physics.    |" << endl;
    cout << "|           Tackling the second equation of motion (s = ut + 0.5at^2)          |" << endl;
    cout << " -------------------------------------------------------------------------------" << endl; 
    
    char ans;
    do{
    int choice;
    double displacement, initial_velocity, acceleration, time;

    cout << "\nSelect the parameter to calculate for: \n";
    cout << "1. Displacement.\n"
         << "2. Initial velocity.\n"
         << "3. Acceleration.\n"
         << "4. Time.\n\n";
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
            second_equation(initial_velocity, acceleration, time, choice);
            break;
        case 2:
            cout << "Enter Displacement (m): ";
            cin >> displacement;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acceleration;
            cout << "Enter Time (s): ";
            cin >> time;
            second_equation(displacement, acceleration, time, choice);
            break;
        case 3:
            cout << "Enter Displacement (m): ";
            cin >> displacement;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> initial_velocity;
            cout << "Enter Time (s): ";
            cin >> time;
            if(time == 0){
            	cout << "Error. Division by zero\n";
			} else {
            second_equation(displacement, initial_velocity, time, choice);
        	}
            break;
        case 4:
            cout << "Enter Displacement (m): ";
            cin >> displacement;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> initial_velocity;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acceleration;
            if(acceleration == 0){
            	cout << "Error. Division by zero\n";
			} else {
            second_equation(displacement, initial_velocity, acceleration, choice);
        	}
            break;
        default:
            cout << "Invalid choice! Kindly restart the program.\n";
    }
    cout << "\n\nDo you want to perform another calculation? (y/n)";
    cin >> ans;
    
} while(ans == 'y');

    return 0;
}

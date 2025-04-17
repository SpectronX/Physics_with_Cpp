#include <iostream>
#include <cmath>

using namespace std;

double third_equation(double a, double b, double c, int d){
	if(d == 1 || d == 2){
		return sqrt(pow(a, 2) + (2 * a * c));
	}
	else if(d == 3 || d == 4){
		return (pow(a, 2) - pow(b, 2)) / (2 * c);
	}
	
	return 0;
}

int main() {
    cout << " -------------------------------------------------------------------------------" << endl;
    cout << "|                  Exploring Newton's Equations of Motion                      |" << endl;
    cout << "|     Three fundamental and widely known equations in the world of Physics.    |" << endl;
    cout << "|           Tackling the third equation of motion (s = ut + 0.5at^2)           |" << endl;
    cout << " -------------------------------------------------------------------------------" << endl; 
    
    char ans;
    do{
    int choice;
    double ini_vel, fin_vel, acc, disp;

    cout << "\nSelect the parameter to calculate for: \n";
    cout << "1. Final Velocity.\n"
         << "2. Initial velocity.\n"
         << "3. Acceleration.\n"
         << "4. Displacement.\n\n";
    cout << ">> ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Initial Velocity (m/s): ";
            cin >> ini_vel;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acc;
            cout << "Enter Displacement(m): ";
            cin >> disp;
            cout << "The final velocity is " << third_equation(ini_vel, acc, disp, choice) << " m/s";
            break;
        case 2:
            cout << "Enter Final Velocity (m/s): ";
            cin >> fin_vel;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acc;
            cout << "Enter Displacement (m): ";
            cin >> disp;
            cout << "The initial velocity is " << third_equation(fin_vel, acc, disp, choice) << " m/s";
            break;
        case 3:
            cout << "Enter Final Velocity (m/s): ";
            cin >> fin_vel;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> ini_vel;
            cout << "Enter Displacement (m): ";
            cin >> disp;
            if(disp == 0){
            	cout << "Error. Division by zero\n";
			} else {
            cout << "The acceleration is " << third_equation(fin_vel, ini_vel, disp, choice) << " m/s^2";
        	}
            break;
        case 4:
            cout << "Enter Final Velocity (m/s): ";
            cin >> fin_vel;
            cout << "Enter Initial Velocity (m/s): ";
            cin >> ini_vel;
            cout << "Enter Acceleration (m/s^2): ";
            cin >> acc;
            if(acc == 0){
            	cout << "Error. Division by zero\n";
			} else {
            cout << "The displacement is " << third_equation(fin_vel, ini_vel, acc, choice);
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

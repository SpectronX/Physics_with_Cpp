#include <iostream>
#include <string>

//This code is a modified version of the original planetary weight calculator.

using namespace std;

int main(){ 
	cout << " -------------------------------------------------------------------------------" << endl;
	cout << "|                        Planetary Weight Calculator                            |" << endl;
	cout << " -------------------------------------------------------------------------------" << endl; 
	

	string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto\n"};
	double g[] = {3.70, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15, 0.62};
	string descriptions[] = {
	"A small, rocky planet with extreme temperature swings between day and night. With almost no atmosphere, it's a harsh environment.\n",
        "A rocky planet enveloped in a thick, toxic atmosphere. Its surface temperatures are high enough to melt lead, making it extremely inhospitable.\n",
        "Our home - a vibrant, rocky planet with a protective atmosphere and abundant water, supporting a diverse range of life.\n",
        "A cold, dusty planet that shows signs of ancient water flows. It remains a prime candidate for future human exploration and colonization.\n",
        "A massive gas giant composed mainly of hydrogen and helium. Since it has no solid surface, 'weight' is theoretical - calculated based on gravitational pull at its cloud tops.\n",
        "Famous for its stunning rings, this gas giant is also made mostly of hydrogen and helium. Like Jupiter, its lack of a defined surface means weight calculations are abstract.\n",
        "An ice giant with a blue-green hue from atmospheric methane. It rotates on its side and has no true solid surface, making 'weight' estimates largely theoretical.\n",
        "Another ice giant known for its supersonic winds and deep blue color. Its weight is calculated theoretically due to the absence of a solid surface.\n",
        "A dwarf planet in the Kuiper Belt, featuring a mix of ice and rock. Though small and distant, Pluto’s characteristics still spark curiosity.\n"
    };

	char ans = 'n';
	
	do{
		int planet;
		double mass;
		for(int i = 0; i<=8; i++){         
			cout << i+1 << ". " << planets[i] << endl;
		}
		cout << "Select a planet of interest: ";
		cin >> planet;
		 
		if(planet <= 0 || planet > 9){
			cout << "Out of range! Enter a number between 1 and 9 (inclusive)\n";
			cout << "Select a planet of interest: ";
			cin >> planet;
		}
		cout << "Enter the mass of the object on the planet(kg): ";
		cin >> mass;
		
		cout << "The weight of a body of such mass would be " << mass * g[planet-1] << "N on " << planets[planet-1] << "\n\n";
		
		cout << "About " << planets[planet-1] << endl;
		cout << descriptions[planet-1] << endl;
		
		cout << "Would you like to try a another planet?(y/n): ";
		cin >> ans;
		
	} while(ans == 'y');
	 
	cout << "Thanks for using the weight calculator. Have a nice day!";
	return 0;
}

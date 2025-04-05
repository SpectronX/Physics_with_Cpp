#include <iostream>

using namespace std;

int main(){
	cout << "******************************************************************************************************************" << endl;
	cout << "*           This programme calculates the weight of masses on different planets in our solar system              *" << endl;
	cout << "*                                                                                                                *" << endl;
	cout << "*             Note: Some planets, like Jupiter and Saturn, are gas giants with no solid surface.                 *" << endl;                                                                
	cout << "*      For these, the weight is calculated based on the gravity at a reference point in their atmosphere.        *" << endl;                                                                                       
	cout << "*                           It's more a theroetical value than a practical one                                   *" << endl;
	cout << "******************************************************************************************************************" << endl << endl;
	
	int planet;
	cout << "1. Mercury\n" 
	     << "2. Venus\n"
	     << "3. Earth\n"
	     << "4. Mars\n"
	     << "5. Jupiter\n"
	     << "6. Saturn\n"
	     << "7. Uranus\n"
	     << "8. Neptune\n"
	     << "9. Pluto\n\n";
	
	cout << "Select your preferred planet in our solar system: ";
	cin >> planet;
	
	switch(planet){
		case 1:
		{
			double merc;
			cout << "Mercury chosen.\nThat's nice! Well given it's proximity to the sun, I don't think anyone would want to be there lol" << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> merc;
			double mer_weight = merc * 3.7;
			cout << "A body of mass " << merc << " kg would weigh " << mer_weight << " N on Mercury\n";
			break;
		}
		
		case 2:
		{
			double ven;
			cout << "Venus chosen.\nA planet of extreme heat and thick clouds! If you love high pressure and acid rain, this might be your dream vacation spot!" << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> ven;
			double ven_weight = ven * 8.87;
			cout << "A body of mass " << ven << " kg would weigh " << ven_weight << " N on Venus\n";
			break;
		}
		
		case 3:
		{
			double earth;
			cout << "Earth chosen.\nWell, we know this one pretty well! Home sweet home, with the perfect conditions for life - at least for now." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> earth;
			double earth_weight = earth * 9.81;
			cout << "A body of mass " << earth << " kg would weigh " << earth_weight << " N on Earth\n";
			break;
		}
		
		case 4:
		{
			double mars;
			cout << "Mars chosen.\nThe Red Planet! A cold, dusty world that's a favorite for future colonization - if we survive the journey." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> mars;
			double mars_weight = mars * 3.71;
			cout << "A body of mass " << mars << " kg would weigh " << mars_weight << " N on Mars\n";
			break;
		}
		
		case 5:
		{
			double jupt;
			cout << "Jupiter chosen.\nThe gas giant! A planet so massive it could fit over 1,300 Earths inside it. Just don't expect to stand on anything solid!" << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> jupt;
			double jupt_weight = jupt * 24.79;
			cout << "A body of mass " << jupt << " kg would weigh " << jupt_weight << " N on Jupiter\n";
			break;
		}
		
		case 6:
		{
			double sat;
			cout << "Saturn chosen.\nThe ringed beauty! With stunning rings and a dense atmosphere, it's one of the most iconic planets in the solar system." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> sat;
			double sat_weight = sat * 10.44;
			cout << "A body of mass " << sat << " kg would weigh " << sat_weight << " N on Saturn\n";
			break;
		}
		
		case 7:
		{
			double uran;
			cout << "Uranus chosen.\nThe sideways planet! It rotates on its side, and its icy atmosphere makes it one of the coldest places in the solar system." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> uran;
			double uran_weight = uran * 8.69;
			cout << "A body of mass " << uran << " kg would weigh " << uran_weight << " N on Uranus\n";
			break;
		}
		
		case 8:
		{
			double nept;
			cout << "Neptune chosen.\nThe windiest planet! Its deep blue color hides raging storms and winds that can reach supersonic speeds." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> nept;
			double nept_weight = nept * 11.15;
			cout << "A body of mass " << nept << " kg would weigh " << nept_weight << " N on Neptune\n";
			break;
		}
		
		case 9:
		{
			double pluto;
			cout << "Pluto chosen.\nThe underdog! Once a planet, now a dwarf planet, but still a fascinating icy world on the outer edges of the solar system." << endl;
			cout << "Anyways, let's look at how much a mass would weigh on that planet.\n";
			cout << "Enter the mass(kg): ";
			cin >> pluto;
			double pluto_weight = pluto * 0.62;
			cout << "A body of mass " << pluto << " kg would weigh " << pluto_weight << " N on Pluto\n";
			break;
		}
		
		default:
		{
			cout << "No planet was chosen :(";
		}
				
	}	
	
	cout << "\nThank you for using the planetary weight calculator! Have a great day!\n";
	
	return 0;
}




#include <iostream>
#include <iterator>
#include <list>
//#include <string>

namespace physics {
	struct Atom {
		int				protons,
							neutrons,
							electrons;
		std::string		name;
	};
}

using namespace std;
//using namespace physics;

void PrintAtom(physics::Atom a) {
	cout << a.name << endl
			 << "\tProtons: " << a.protons << endl
			 << "\tNeutrons: " << a.neutrons << endl
			 << "\tElectrons: " << a.electrons << endl;
}

int main()
{
	list<physics::Atom> isotope;
	
	physics::Atom a = { 1, 0, 1, "Hydrogen" };
	physics::Atom b = { 1, 1, 2,"Helium"};
	
	isotope.push_back(a);
	isotope.push_back(b);

	cout << "Size of Atom is " << sizeof(physics::Atom) << endl;
	cout << "Size of isotope is " << isotope.size() << endl;
	//cout << "Size of AtomArray is " << sizeof(AtomArray) << endl;
	
/*	for(int i = 0; i < AtomArray.size(); i++) {
		cout << "Inside the for-loop." << endl;

	}
*/
	cout << "Outside the for-loop." << endl;

	return 0;
}
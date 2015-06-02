#include <iostream>
#include <fstream>
#include <iterator>
#include <list>

using namespace std;

namespace physics {
	struct Atom {
		int				protons,
							neutrons,
							electrons;
		std::string		name,
									symbol;
	};
	struct PeriodicTable {
		int			num;
		string	sym,
						name;
		float		weight;
		string	notes;
	};
}

void ReadInputFile(std::string fname) {
}

void PrintAtom(physics::Atom a) {
	cout << a.name << "(" << a.symbol << "):" << endl
			 << "\tProtons: " << a.protons << endl
			 << "\tNeutrons: " << a.neutrons << endl
			 << "\tElectrons: " << a.electrons << endl;
}

int main()
{
	list<physics::Atom> isotope;
	
	physics::Atom a = { 1, 0, 1, "Hydrogen", "H" };
	physics::Atom b = { 1, 1, 2,"Helium", "He" };
	
	isotope.push_back(a);
	isotope.push_back(b);

	ifstream readFile;
	readFile.open("atom_weight.txt");
	string s;
	while(!readFile.eof()) {
		getline(readFile, s);
		cout << s << endl;
	}
	readFile.close();
	
	cout << "Size of Atom is " << sizeof(physics::Atom) << endl;
	cout << "Size of isotope is " << isotope.size() << endl;

	list<physics::Atom>::const_iterator iterator;
	for(iterator = isotope.begin(); iterator != isotope.end(); ++iterator) {
		PrintAtom(*iterator);
	}
	cout << "Outside the for-loop." << endl;

	return 0;
}
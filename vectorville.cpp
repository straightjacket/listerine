#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Atom {
	int				protons,
							neutrons,
							electrons;
	string			name;
};

Atom AtomArray []= {
	{
		1,
		0,
		1,
		"Hydrogen"
	},
	{
		1,
		1,
		2,
		"Helium"
	}
};

int main()
{
	vector<Atom> isotope;
	cout << "Size of Atom is " << sizeof(Atom) << endl;
	cout << "Size of vector is " << sizeof(isotope) << endl;
	cout << "Size of AtomArray is " << sizeof(AtomArray) << endl;
	
	for(std::vector<Atom>::iterator it = isotope.begin(); it != isotope.end(); ++it)
		cout << it->protons << endl;
	
	return 0;
}
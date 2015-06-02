#include "physics.h"

void ReadInputFile(std::string fname) {
}

void PrintAtom(physics::Atom a) {
	cout << a.name << "(" << a.symbol << "):" << endl
			 << "\tProtons: " << a.protons << endl
			 << "\tNeutrons: " << a.neutrons << endl
			 << "\tElectrons: " << a.electrons << endl;
}

void test() {
    vector<string> strings;
    istringstream f("denmark;sweden;india;us");
    string s;    
    while (getline(f, s, ';')) {
        cout << s << endl;
        strings.push_back(s);
    }
}

int main()
{
	list<physics::Atom> isotope;
	
	ifstream readFile;
	readFile.open("atom_weight.txt");
	string s;
	while(!readFile.eof()) {\
		string astr;
		getline(readFile, s);
		istringstream stream(s);
		cout << s << endl;
		while(getline(stream, astr, '\t')) {
		//	cout << astr << "::";
		}
		//cout << endl;
	}
	readFile.close();
	
	test();
	return 0;
}
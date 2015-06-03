#include "physics.h"
#include <stdlib.h>

void ReadInputFile(std::string fname) {
}

void PrintAtom(physics::Atom a) {
	cout << a.name << "(" << a.symbol << "):" << endl
			 << "\tProtons: " << a.protons << endl
			 << "\tNeutrons: " << a.neutrons << endl
			 << "\tElectrons: " << a.electrons << endl;
}

void PrintPeriodicTable(physics::PeriodicTable p) {
	cout << p.num << " (" << p.sym << "): "
			 << p.name << ": "
			 << p.weight << ": "
			 << p.notes << endl;
}


void test() {
    vector<string> strings;
		istringstream f("73\tTa\tTantalum\t180.94788(2)");
    string s;    
    while (getline(f, s, '\t')) {
        cout << s << endl;
        strings.push_back(s);
    }
}

int main()
{
	list<physics::Atom> isotope;
	
	ifstream readFile;
	string s;
	readFile.open("atom_weight.txt");
	
	while(!readFile.eof()) {\
		string astr;
		getline(readFile, s);
		istringstream stream(s);
		vector<string> pt;
		while(getline(stream, astr, '\t')) {
			pt.push_back(astr);
		}
		for (int i=0; i < pt.size(); i++) {
			//cout << pt[i] << "|";
		}
		physics::PeriodicTable element;
		element.num		= atoi(pt[0].c_str());
		element.sym   = pt[1];
		element.name  = pt[2];
		element.weight = pt[3];
		if(pt.size() > 4) {
			element.notes = pt[4];
		} else {
			element.notes = "";
		}
		PrintPeriodicTable(element);
	}
	
	readFile.close();
	
	//test();
	return 0;
}
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

namespace physics {
	struct Atom {
		int		protons,
				neutrons,
				electrons;
		std::string	name,
				symbol;
	};
	struct PeriodicTable {
		int		num;
		string	sym,
				name;
		float		weight;
		string		notes;
	};
}

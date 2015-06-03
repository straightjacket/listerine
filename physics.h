#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

namespace physics {
	struct Atom {
		int		  protons,
				    neutrons,
				    electrons;
		string  name,
				    symbol;
	};
	struct PeriodicTable {
		int		  num;
		string	sym,
				    name,
					  weight,
				    notes;
	};
}

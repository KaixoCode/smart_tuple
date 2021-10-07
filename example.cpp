#include "smart_tuple.hpp"
#include <cassert>

using namespace kaixo;
int main()
{
	smart_tuple<int, float, double> thing{ 1, 0.5f, 4. };

	// By value
	int val1 = thing[0];
	float val2 = thing[1];
	double val3 = thing[2];
	assert(val1 == 1);
	assert(val2 == 0.5f);
	assert(val3 == 4.);

	// By reference
	int& val4 = thing[0];
	val4++;
	int val5 = thing[0];
	assert(val4 == val5);
}

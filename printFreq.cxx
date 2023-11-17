#include <cstdio>
#include <cstdlib>
#include <climits>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "freq.h"

using namespace std;

namespace coen79
{

	void printFreq(const vector<Tuple> freq)
	{
		for (auto x : freq)
			cout << "Char: " << x.letter << ", Freq: " << x.freq << endl;
	}

}

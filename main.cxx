/*
 * Name: Your Name
 * Email: Your email
 * Student ID: optional
 * Contact: Optional, your cell phone or whatever handle
 *
 * Assignment: What assignment is this file for.
 * x of y: if you have more than one file.  Say so here.
 */
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "freq.h"

using namespace std;
using namespace coen79;

int main(int argc, char *argv[])
{
	std::string fn;
	if (argc > 1)
		fn = argv[1];
	else
		cerr << "Need a file name" << endl;

	size_t counts[UCHAR_MAX + 1] = {0};
	char order[30];

	vector<Tuple> freq;

	CountPrintable(fn, counts);
	AnalyzeFreq(counts, UCHAR_MAX + 1, &freq);
	SaveFreq(freq, fn);

	return EXIT_SUCCESS;
}

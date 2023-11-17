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
#include <fstream>
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

	// open the file, presumed to be binary frequency file
	// read them into the vector
	// print the vector out in a human friendly way

	return EXIT_SUCCESS;
}

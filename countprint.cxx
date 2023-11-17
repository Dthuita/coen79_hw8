/*
 * Name: Your Name
 * Email: Your email
 * Student ID: optional
 * Contact: Optional, your cell phone or whatever handle
 *
 * Assignment: What assignment is this file for.
 * x of y: if you have more than one file.  Say so here.
 */
#include <climits>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "freq.h"

using namespace std;

namespace coen79
{
	// a-z is
	void CountPrintable(std::string fn, size_t *counts)
	{ // read file and store new chacters to start a count
		fstream fs;
		fs.open(fn, std::fstream::in);
		if (fs.is_open())
		{
			std::string line;
			while (getline(fs, line))
			{
				for (auto ch : line)
				{
					counts[(int)ch]++;
					// cout << ch << endl;
				}
			}
		}
		else
		{
			cout << "could not open file\n"
				 << endl;
		}
		// test if file exists, open it
		// read each line or character by character
		// count them into the array
		for (int i = 0; i < UCHAR_MAX; i)
		{
			if (counts[i] != 0)
				cout << (char)i << " : " << counts[i] << endl;
		}
	}

}

/*
 * Name: Your Name
 * Email: Your email
 * Student ID: optional
 * Contact: Optional, your cell phone or whatever handle
 *
 * Assignment: What assignment is this file for.
 * x of y: if you have more than one file.  Say so here.
 */
#ifndef FREQH
#define FREQH

namespace coen79
{

	struct Tuple
	{
		char letter; // printable character
		double freq; // its frequency
	};

	void CountPrintable(std::string, size_t *);
	void AnalyzeFreq(size_t *const, int, std::vector<Tuple> *);
	void SaveFreq(const std::vector<Tuple>, std::string);
	void printFreq(const std::vector<Tuple>);
}

#endif // FREQH

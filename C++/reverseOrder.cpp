#include <iostream>
#include <string>

string reverse(string const original) {

	string reverse;
	
	// Starts for loop at the end of the string in order to grab character and store at the front of string "reverse"
	for (int i = original.length(); i >= 0; i--) {
		reverse.push_back(original[i]);
	}
	return reverse;
}

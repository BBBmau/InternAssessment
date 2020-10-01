#include <iostream>
#include <string>

string largest(string paragraph) {
	string largest = "";
	string word = "";

	for (int i = 0; i < paragraph.length(); i++) {
		//Checks whether character is a letter, if it is it stores it in the string "word"
		if (!isalpha(paragraph[i])) {
			//Once character is found to not be a letter, such as whitespace or number, it checks whether or not
			// it is bigger than the previous stored word in "largest"
			if (word.length() > largest.length()) {
				largest = word;	
			}
			//resets word string
			word = "";
			continue;
		}
		word.push_back(paragraph[i]);
	}
	return largest;
}

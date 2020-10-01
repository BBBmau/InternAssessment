#include <iostream>
#include <algorithm>
#include <vector>

string popular(string paragraph) {
	bool multiple = false;
	vector<string> set;
	string word = "";
	int counter;
	int most = 0;
	int i, j;
	string top;

	//goes through the string to change all characters to lowercase
	for_each(paragraph.begin(), paragraph.end(), [](char& c) {
		c = tolower(c);
		});
	
	// For loop goes through string and grabs each word, storing it in the vector named "set"
	for (i = 0; i < paragraph.length(); i++) {
		if (ispunct(paragraph[i])) {
			continue;
		}
		if (!isalnum(paragraph[i])) {
			set.push_back(word);
			word = "";
			continue;
		}
		word.push_back(paragraph[i]);
		if (i == paragraph.length() - 1) {
			set.push_back(word);
		}
	}
	
	// goes through the set vector and counts how many words exist within the paragraph
	for (i = 0; i < set.size(); i++) {
		counter = 0;
		for (j = 0; j < set.size(); j++) {
			if (set[i] == set[j]) {
				counter++;
			}
		}
		if ((counter >= most) && (top != set[i])) {
			if (counter == most) {
				multiple = true;
			}
			else if (counter > most) {
				multiple = false;
			}
			top = set[i];
			most = counter;
		}
	}
	if (multiple) {
		top = "No Most Popular Word Exists.";
	}
	return top;
}

#include <iostream>
#include <string>

string questionMarks(string phrase) {
	int count = 0;
	int sum = 0;
	string result;

	for (int i = 0; i < phrase.length(); i++) {
		//Statement checks whether character is a digit and if count of question marks has reached 3 or more
		if (isdigit(phrase[i]) && (count >= 3)) {
			// if conditions are met it adds the sum of the two numbers assuming the next character is a number.
			sum = sum + (phrase[i] - '0'); // we subtract by char of '0' in order to get the int of the char at phrase[i]
			continue;
		}
		if ('?' == phrase[i]) {
			count++;
			// adds to counter if character is a question mark
			if ((count == 6) && (sum == 10)) {
				// the final condition confirms whether we have two numbers that equal 10 and that their exists 3 question marks on either side
				// ???55???
				result = "true";
				break;
			}
			continue;
		}
		else {
			//counter and sum are reset if a character is not a question mark or a number or does not sum to 10
			count = 0;
			sum = 0;
			result = "false";
		}
	}

	return result;
}

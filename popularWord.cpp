string popular(string paragraph) {
	bool multiple = false;
	vector<string> set;
	string word = "";
	int counter;
	int most = 0;
	int i, j;
	string top;

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
	}
	for (i = 0; i < set.size(); i++) {
		counter = 1;
		for (j = 0; j < set.size(); j++) {
			if (i == j) {
				continue;
			}
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

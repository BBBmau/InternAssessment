string popular(string paragraph) {
	vector<string> set;
	string word = "";
	int counter = 0;
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
		counter = 0;
		for (j = 0; j < set.size(); j++) {
			if (i == j) {
				continue;
			}
			if (set[i] == set[j]) {
				counter++;
			}
		}
		if (counter > most) {
			top = set[i];
			most = counter;
		}
	}
	return top;
}

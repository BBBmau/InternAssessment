string largest(string paragraph) {
	string largest = "";
	string word = "";

	for (int i = 0; i < paragraph.length(); i++) {
		if (!isalpha(paragraph[i])) {
			if (word.length() > largest.length()) {
				largest = word;	
			}
			word = "";
			continue;
		}
		word.push_back(paragraph[i]);
	}
	return largest;
}

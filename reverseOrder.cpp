string reverse(string const original) {

	string reverse;

	for (int i = original.length(); i >= 0; i--) {
		reverse.push_back(original[i]);
	}
	return reverse;

}

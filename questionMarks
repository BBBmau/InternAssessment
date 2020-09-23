string questionMarks(string phrase) {
	int count = 0;
	int sum = 0;
	string result;

	for (int i = 0; i < phrase.length(); i++) {
		//cout << phrase[i] << " " << count << endl;
		if (isdigit(phrase[i]) && (count >= 3)) {
			//cout << phrase[i];
			sum = sum + (phrase[i] - '0');
			cout << sum << endl;
			continue;
		}
		if ('?' == phrase[i]) {
			count++;
			//cout << phrase[i] << " " << count << " " << sum << endl;
			if ((count == 6) && (sum == 10)) {
				result = "true";
				break;
			}
			continue;
		}
		else {
			count = 0;
			sum = 0;
			result = "false";
		}
	}

	return result;
}

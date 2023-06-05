int singleNonDuplicate(vector<int>& arr) {

	int x = 0;
	int n = arr.size();

	for (int i = 0; i < n; i++) {
		x ^= arr[i];
	}

	return x;

}
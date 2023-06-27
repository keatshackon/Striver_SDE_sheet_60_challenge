int removeDuplicates(vector<int> &arr, int n) {


    int i = 1;
    int c = 0;

    while (i < n) {
        if (arr[i] == arr[i - 1]) {
            c++;
        }
        i++;
    }

    return arr.size() - c;
}
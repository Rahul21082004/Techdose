vector<vector<int>> generateSubsets(vector<int>& arr) {
    vector<vector<int>> subsets;
    int n = arr.size();
    for (int i = 0; i < (1 << n); i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

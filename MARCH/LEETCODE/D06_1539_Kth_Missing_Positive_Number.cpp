class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int s = 0, e = n-1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (arr[m] - (m + 1) < k)
                s = m + 1;
            else
                e = m - 1;
        }
        return s + k;
    }
};
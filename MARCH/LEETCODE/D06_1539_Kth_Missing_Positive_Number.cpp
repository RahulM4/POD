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
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //Brute force
        vector<int> freq(1001);
        for(auto it: arr)
        {
          freq[it]++;
        }
    
    for(auto it=1; it<freq.size();it++)
    {
      if(freq[it]==0)
      {
        k--;
      }
      if(k==0)
      return it;
    }
    return 1000+k;
  }
};

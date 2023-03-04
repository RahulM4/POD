// Problem link https://practice.geeksforgeeks.org/problems/a3493283697b7b69573a840f371a55ccd9332bb0/1

#define ll long long
class Solution
{
public:
    long long bestNode(int N, vector<int> &A, vector<int> &P)
    {
        // Create a set and push P array into set
        set<int> s;
        for (int i = 0; i < N; i++)
            s.insert(P[i]);
        // Find out leaf nodes from s
        vector<int> leaf_node;
        for (int i = 1; i <= P.size(); i++)
        {
            if (!s.count(i))
            {
                leaf_node.push_back(i);
            }
        }
        // Traverse from leaf to root and store max at each and every time visited new node
        ll ans = LLONG_MIN;
        for (int leaf : leaf_node)
        {
            int curr_node = leaf;
            ll sum = 0;
            // Indicate the root
            while (curr_node != -1)
            {
                sum = -sum;
                sum += A[curr_node - 1];
                ans = max(ans, sum);
                curr_node = P[curr_node - 1];
            }
        }
        return ans;
    }
};
//Not Done by me
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

   void merge(vector<int> &v, int l, int m, int h)
   {
       vector<int> temp;
       int lt=l, rt =m+1;
       while(lt<=m and rt <=h)
       {
            if(v[lt]<=v[rt])
            {
                temp.push_back(v[lt]);
                lt++;
            }
            else
            {
                temp.push_back(v[rt]);
                rt++;
            }
       }
       while(lt<=m )
       {
            temp.push_back(v[lt]);
            lt++;
       }
       while(rt<=h)
       {
            
            temp.push_back(v[rt]);
            rt++;
       }

       for(auto it =l; it<=h ;it++)
       {
           v[it]=temp[it-l];
       }
   }
   void mergeSort(vector<int> &v, int l,int h)
   {
     

       if(l>=h)
       return ;
         int m= (l+h)/2;
       mergeSort(v, l,m);
       mergeSort(v, m+1, h);
       merge(v, l, m, h);
    
   }
    vector<int> sortArray(vector<int>& nums) {
        //merge sort
        mergeSort(nums, 0, nums.size()-1);

        return nums;

        
    }
};

int main()
{
    Solution s;
    vector<int> v={5,2,3,1};
    s.sortArray(v);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}
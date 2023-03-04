class Solution {
public:
    int compress(vector<char>& s) {
      
      int n=s.size(),j=0,i=0;
      if(n==1) return 1;
      while(i<n)
      {
          int cnt=0;
          s[j]=s[i];
          while(i<n and s[i]==s[j])
          {
              cnt++;
              i++;

          }

          if(cnt>1)
          {
              string nums = to_string(cnt);
              for(auto d: nums)
              {
                  s[++j]=d;
                   
              }
              j++;
             
          }
          else
          {
              j++;
          }
         

      }
      return j;
      
    }
};
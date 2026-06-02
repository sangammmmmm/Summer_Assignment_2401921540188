class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int j = 0;
        int sum= 0;
       double maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++)
        {
          sum+=nums[i];
          j++;
          if(j==k)
          {
             double ans = (double) sum/k;
             maxi = max(ans,maxi);
             j-=1;
             sum-=nums[i-k+1];
          }
         }
         return maxi;
    }
};

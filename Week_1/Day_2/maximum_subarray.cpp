class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxM = nums[0];
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum +=nums[i];
            if(sum>maxM){
              maxM = max(sum,maxM);
            }
            if(sum<0)
            {
            sum = 0;
            }
        }
        return maxM;
    }
};

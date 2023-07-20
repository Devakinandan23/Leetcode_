class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        vector<int>v;
        for(int i = 0;i < nums.size();i++)
        {
            sum += nums[i];
            maxi = max(maxi,sum);
            v.push_back(nums[i]);
            if(sum < 0)
            {
                sum = 0;
                v.clear();
            }
        }
        for(auto x:v) cout<<x<<" ";
        return maxi;
        
    }
};

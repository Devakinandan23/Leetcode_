class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n = nums.size();
        set<int>s(nums.begin(),nums.end());
        if(!s.count(t))
        {
            return -1;
        }
        int i = 0;
        int j = n-1;
        while(i <= j)
        {
            int m = i + (j-i)/2;
            if(nums[m] == t)
            {
                return m;
            }
            else if(nums[m] >= nums[i])
            {
                if(t >= nums[i] && t < nums[m])
                {
                    j = m - 1;
                }
                else
                {
                    i = m + 1;
                }
            }
            else if(nums[m] <= nums[j])
            {
                if(t > nums[m] && t <= nums[j])
                {
                    i = m + 1;
                }
                else
                {
                    j = m - 1;
                }
            }
        }
        return -1;
    }
};

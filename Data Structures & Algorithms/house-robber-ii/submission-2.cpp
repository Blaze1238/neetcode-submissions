class Solution {
public:
    int robSep(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < n; i++){
            dp[i] = max(dp[i-1],nums[i] + dp[i-2]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 ) return nums[0];
        vector<int> nums1;
        for(int i=0; i<n-1; i++){
            nums1.push_back(nums[i]);
        }

        vector<int> nums2;
        for(int i=1; i<n; i++){
            nums2.push_back(nums[i]);
        }

        return max(robSep(nums1), robSep(nums2));
    }
};

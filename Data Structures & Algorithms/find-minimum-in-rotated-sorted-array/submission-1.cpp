class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int n = nums.size();
        int h = n - 1;
        int m = -1;
        while(l<h){
            m = (l+h)/2;
            if(nums[m] > nums[h]) l = m+1;
            else h = m;
        }
        return nums[l];
    }
};

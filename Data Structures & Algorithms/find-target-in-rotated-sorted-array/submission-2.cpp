class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int m = -1;
        while(l < h){
            m = (l+h)/2;
            if(nums[m] > nums[h]) l = m+1;
            else 
                h = m;
        }
        if(target <= nums[nums.size()-1]) h = nums.size() - 1;
        else {
            l = 0;
            h--;
        }

        while(l<=h){
            m = (l+h)/2;
            if(nums[m] == target) return m;
            else if(target > nums[m]) l = m+1;
            else h = m-1;
        }
        return -1;
    }
};

class Solution {
public:
    void sortArray(vector<int>& nums){
        for(int i=0; i<nums.size()-1; i++){
            int smallest = i;
            for(int j=i+1; j<nums.size(); j++){
                smallest =( nums[j] < nums[smallest]) ? j : smallest;
            }
            swap(nums[i],nums[smallest]);
        }
    }
        
    vector<vector<int>> threeSum(vector<int>& nums) {
        sortArray(nums);
        for(const auto& num : nums)
            cout<<num << ' ';
        vector<vector<int>> res;

        for(int i=0; i<nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int j = i+1, k =nums.size() -1;
            while(j < k){
                if(nums[j] + nums[k] < target) j++;
                else if(nums[j] + nums[k] > target) k--;
                else {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--; //Moving the pointers after insertion

                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }

        return res;
    }
};

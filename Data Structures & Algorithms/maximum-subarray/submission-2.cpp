class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0;
        int globalMax = NULL;

        for(const auto& i : nums){
            int locSum = curSum + i;
            if(locSum > i){
                curSum = locSum;
            } else{
                curSum = i;
            }
            
            if(globalMax == NULL || curSum > globalMax) globalMax = curSum;
        }

        return globalMax;
    }
};

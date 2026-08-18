class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res; 
        int mul = 1;
        int mul_without_zero = 1;
        int num_zeroes = 0;
        for(const auto& num : nums) {
            if(num == 0){num_zeroes++ ;mul *= num; continue;}
            mul_without_zero *= num;
            mul *= num;
        }
        for(const auto& num : nums) {
            if(num_zeroes >= 2) res.push_back(0);
            else{
            if (num == 0) res.push_back(mul_without_zero);
            else res.push_back(mul/num);} 
        }
        return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1); 

        //prefix product
        for(int i=1; i<n; i++){
            res[i] = res[i-1] * nums[i-1];
        }

        //suffix product
        int suf_mul = 1;
        for(int i= n-2; i>=0; i--){
            suf_mul *= nums[i+1];
            res[i] *= suf_mul;
        }

        return res;
    }
};

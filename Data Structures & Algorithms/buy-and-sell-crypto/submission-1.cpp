class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int l = 0;
        int r = 0;
        int n = prices.size();

        while(r < n){
            result = max(result, prices[r] - prices[l]);
            if(prices[l] >= prices[r]) l += r - l;
            r++;
        }
        return result;
    }
};

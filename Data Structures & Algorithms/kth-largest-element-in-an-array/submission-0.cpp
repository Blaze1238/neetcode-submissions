class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int i = 0;
        while(i != k-1){
            pq.pop();
            i++;
        }
        return pq.top();
    }
};

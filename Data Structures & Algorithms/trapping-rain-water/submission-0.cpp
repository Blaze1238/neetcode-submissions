class Solution {
public:
    int trap(vector<int>& height) {
        int max_h = 0;
        int n = height.size();
        vector<int> pre_max(n,0);
        vector<int> suf_max(n,0);

        for(int i=0; i<n; i++){
            int temp = max(max_h,height[i]);
            if(temp > max_h) max_h = temp;
            pre_max[i] = temp;
        }
        max_h = 0;
        for(int i=n-1; i>=0; i--){
            int temp = max(max_h,height[i]);
            if(temp > max_h) max_h = temp;
            suf_max[i] = temp;
        }
        int result=0;
        for(int i=1; i<n-1; i++){
            result += min(pre_max[i],suf_max[i]) - height[i];
        }
        return result;
    }
};

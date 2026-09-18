class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        int k = -1;
        int l = 1;
        int hi = max;

        while(l <= hi){
            int m = (l+hi)/2;
            
            int tTime = 0;
            for(const auto& p : piles){
                tTime += ceil((double)p/m);
            }
            if(tTime > h) l = m + 1;
            else{
                k=m;
                hi = m-1;
            }  
        }
        return k; 
    }
};

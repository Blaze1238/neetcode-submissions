class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size() > 1){
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
            if(s1 == s2) continue;
            int res = s1 - s2;
            pq.push(res);
            // cout<<res<<endl;
        } 
        if (pq.size() == 0 ) return 0;
        return pq.top();
    }
};

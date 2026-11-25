class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        using Pair = pair<float,int>;
        vector<vector<int>> res;
        priority_queue<Pair, vector<Pair>, std::greater<Pair>> dist_pq;
        for(int i = 0; i < points.size(); i++){
            pair<float, int> temp;
            float d = sqrt(points[i][1] * points[i][1] + points[i][0] * points[i][0]);
            temp.first = d;
            temp.second = i;
            dist_pq.push(temp);
        }

        int i = 0; 

        while(i != k){
            res.push_back(points[dist_pq.top().second]);
            dist_pq.pop();
            i++;
        }
        
        return res;
    }
};

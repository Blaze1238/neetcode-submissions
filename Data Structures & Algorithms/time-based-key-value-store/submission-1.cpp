class TimeMap {

private:
    unordered_map<string, vector<std::pair<int,string>>> map;

public:
    TimeMap() {
        ;
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(!map.contains(key)) return "";
        int l = 0;
        int h = map[key].size() - 1;
        string ans = "";
        while(l <= h){
            int m = (l + h)/2;
            if(map[key][m].first == timestamp) return map[key][m].second;
            else if(timestamp > map[key][m].first){ 
                ans = map[key][m].second;
                l = m + 1;
            }
            else 
                h = m - 1;
        }
        return ans;
    }
};

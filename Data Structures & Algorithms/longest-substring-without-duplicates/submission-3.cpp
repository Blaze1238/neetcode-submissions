class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        int res = 0;
        unordered_map<char,int> map;
        while(j < n){
            if(!map.contains(s[j])) map[s[j]] = 1;
            else{
                if(map[s[j]] == 1){
                    while(s[i] != s[j]){
                        map[s[i]]--;
                        i++;
                    }
                    i++;
                }else{
                    map[s[j]] = 1;
                }
            }
            res = max(res, j-i+1);
            j++;
        }   
        return res;
    }
};

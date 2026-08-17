class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        std::unordered_map<char,int> map_s;
        std::unordered_map<char,int> map_t;

        int len = s.length();

        for(int i=0; i<len; i++){
            map_s[s[i]] = (map_s.contains(s[i])) ? map_s[s[i]] + 1 : 1; 
            map_t[t[i]] = (map_t.contains(t[i])) ? map_t[t[i]] + 1 : 1;
        }

        if(map_s == map_t) return true;
        return false;
    }
};

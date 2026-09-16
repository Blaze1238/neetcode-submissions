class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l = 0, r = 0;
        int res = 0;
        unordered_map<char,int> map;
        char maxChar = '#';
        while(r<n){
            map[s[r]]++;
            if(map[s[r]] > map[maxChar]) maxChar = s[r];
            if(r-l+1 - map[maxChar] > k){
                map[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }      
        return res;
    }
};


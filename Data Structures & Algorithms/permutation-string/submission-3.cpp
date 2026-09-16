class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if(n2 < n1) return false;

        array<int,26> s1FreqArray = {0};
        array<int,26> s2FreqArray = {0};
        int l=0, r=0;

        for(const auto& c : s1) s1FreqArray[c - 'a']++;

        while(r < n2){
            s2FreqArray[s2[r] - 'a']++; 
            if(r-l+1 > n1){
                s2FreqArray[s2[l] - 'a']--;
                l++;    
            }
            if(r-l+1 == n1 && s1FreqArray == s2FreqArray) return true;
            r++;
        }
        return false;
    }
};

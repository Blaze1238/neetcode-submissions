class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map;
        for(const auto& num : nums){
            if(map.contains(num)) return true;
            map.emplace(num,1); 
        }
        return false;
    }
};
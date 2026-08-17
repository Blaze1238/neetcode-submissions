class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        std::vector<int> ind_vec;

        int i = 0;
        for(auto const& num: nums){
            
            if(map.contains(num)){
                ind_vec.push_back(map[num]);
                ind_vec.push_back(i);
                break; 
            }

            int rem = target - num;
            map[rem] = i++;
        } 
        return ind_vec;
    }
};

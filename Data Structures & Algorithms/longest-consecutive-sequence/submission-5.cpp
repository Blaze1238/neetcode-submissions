class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        map<int,bool> map;
        int largest_value = 0;
        int smallest_value = 0;

        for(const auto& num : nums){
            if(num > largest_value) largest_value = num;
            if(num < smallest_value) smallest_value = num;

            map[num] = true;
        }

        int res = 1;
        int seq_length = 0;

        int seq = smallest_value-1;

        for(const auto& [num,val] : map){
            cout<<num<<endl;
            if(num == seq+1) {
                seq++; 
                seq_length++;
                if(seq_length > res) res = seq_length;
            }
            else{
                seq_length = 1;
                seq = num;
            }
        }
        return res;
    }
};

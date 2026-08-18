class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //     std::unordered_map <int,std::vector<int>> bucket_map; // will have all frequency buckets
    //     std::unordered_map <int,int> num_map; //will have frequency for each value
    //     int largest_freq = 0;
    //     int prev_freq = -1;
    //     for(const auto& num : nums){
    //         if(num_map.contains(num)){
    //             prev_freq = num_map[num];
    //             num_map[num] = num_map[num] + 1;
    //         } else {
    //             num_map[num] = 1;
    //         }
    //         largest_freq = (num_map[num] > largest_freq) ? num_map[num] : largest_freq;

    //         if(!bucket_map.contains(largest_freq)){
    //             bucket_map[largest_freq] = {num};    
    //         } else{
    //             bucket_map[num_map[num]].push_back(num);
    //         }
    //         if(prev_freq != -1) bucket_map[prev_freq].pop_back();
    //     }

    //     std::vector<int> res;    
    //     int j = 0;
    //     for(int i = largest_freq; i>=1; i--){
    //         if(bucket_map[i].size() != 0){ res.push_back(bucket_map[i].at(0)); j++;} 
    //         // std::cout<<i<<" "<<bucket_map[i].size()<<endl;       
    //         if(j == k){ break;}
    //     } 
    //     return res;
    // }

    std::unordered_map<int,int> map;

    for(const auto& num : nums){
        map[num]++;
    }

    std::vector<std::vector<int>> bucket(nums.size()+1);

    for(const auto& [num,freq] : map){
        bucket[freq].push_back(num);
    }

    std::vector<int> res;
    for(int i = nums.size(); i >= 1; i--){
        for(const auto& num : bucket[i]){
            res.push_back(num);
            if(res.size() == k) return res;
        }
    }
    }
};

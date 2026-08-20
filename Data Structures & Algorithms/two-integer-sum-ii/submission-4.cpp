class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size() - 1;
        int left = 0;
        int found = 0;
        int temp_target = target;

        while(right != left){
            if(numbers[left] + numbers[right] > target) right--;
            else if(numbers[left] + numbers[right] < target) left++;  
            else return {left+1, right+1};           
        }
    }
};

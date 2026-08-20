class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;

        int max_area = (j - i) * (min(heights[j],heights[i])); 
        while(i < j){
            if(heights[i] < heights[j]) i++;
            else j--;

            int area = (j - i) * (min(heights[j],heights[i])); 

            max_area = max(max_area,area);
        }
        return max_area;
    }
};

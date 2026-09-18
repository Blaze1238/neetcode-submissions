class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0; 
        int h = (m*n)-1;

        while(l <= h){
            int mid = (l+h)/2;
            int i = mid/n;
            int j = mid%n;
            if(matrix[i][j] == target ) return true;
            else if(target > matrix[i][j]) l = mid + 1;
            else h = mid - 1; 
        }
        return false;
    }
};

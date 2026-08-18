class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char,vector<int>>> main_vec(9);

        for(int i = 0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    char num = board[i][j];
                    
                    int index = (i/3) * 3 + (j/3);

                    //Check for duplicate in same box 
                    if(main_vec[index].contains(num)) return false;
                    else{
                        main_vec[index][num].push_back(i);
                        main_vec[index][num].push_back(j);
                    } 

                    //Check for duplicate in row and column
                    for(int k=0; k<9; k++){
                        if(k != index){
                            if(main_vec[k].contains(num)){
                                if(main_vec[k][num][0] == i || main_vec[k][num][1] == j) return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};

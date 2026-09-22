class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        std::unordered_map<int, std::unordered_set<char>> occur_column, three_by_three;
        std::unordered_set<char> occur_row;

        for (int r=0; r<9; r++) {
            if ((r%3==0) && (r!=0)){
                three_by_three.clear();
            }
            for (int c=0; c<9; c++) {
                if (board[r][c]!='.'){
                    char letter = board[r][c];
                    if (c<3){
                        if (auto [it, inserted] = three_by_three[1].insert(letter); !inserted)
                            return false;
                    }
                    else if (c<6){
                        if (auto [it, inserted] = three_by_three[2].insert(letter); !inserted)
                            return false;
                    }
                    else {
                        if (auto [it, inserted] = three_by_three[3].insert(letter); !inserted)
                            return false;
                    }
                    if (auto [it, inserted] = occur_row.insert(letter); !inserted)
                        return false;
                    if (auto [it, inserted] = occur_column[c].insert(letter); !inserted)
                        return false;
                }
            }
            occur_row.clear();
        }
        return true;
    }
};

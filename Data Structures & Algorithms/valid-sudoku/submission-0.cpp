class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<char, int> three_by_three1, three_by_three2, three_by_three3;
        std::unordered_map<char, int> occur_row, occur_column1, occur_column2, occur_column3, occur_column4, occur_column5, occur_column6,
        occur_column7, occur_column8, occur_column9;

        for (int r=0; r<9; r++) {
            if (r%3==0) {
                three_by_three1.clear();
                three_by_three2.clear();
                three_by_three3.clear();
            }
            for (int c=0; c<9; c++) {
                if (board[r][c]!='.'){
                    char letter = board[r][c];
                    if (c<3){
                        if (three_by_three1[letter]+1 > 1) {
                            return false;
                        }
                        else {
                            three_by_three1[letter]++;
                        }
                    }
                    else if (c<6){
                        if (three_by_three2[letter]+1 > 1) {
                            return false;
                        }
                        else {
                            three_by_three2[letter]++;
                        }
                    }
                    else {
                        if (three_by_three3[c]+1 > 1) {
                            return false;
                        }
                        else {
                            three_by_three3[letter]++;
                        }
                    }
                    if (occur_row[letter]+1 > 1)
                        return false;
                    else
                        occur_row[letter]++;

                    if (c==0) {
                        if (occur_column1[letter]+1>1)
                            return false;
                        else
                            occur_column1[letter]++;
                        continue;
                    }
                    if (c==1) {
                        if (occur_column2[letter]+1>1)
                            return false;
                        else
                            occur_column2[letter]++;
                        continue;
                    }
                    if (c==2) {
                        if (occur_column3[letter]+1>1)
                            return false;
                        else
                            occur_column3[letter]++;
                    }
                    if (c==3) {
                        if (occur_column4[letter]+1>1)
                            return false;
                        else
                            occur_column4[letter]++;
                        continue;
                    }
                    if (c==4) {
                        if (occur_column5[letter]+1>1)
                            return false;
                        else
                            occur_column5[letter]++;
                        continue;
                    }
                    if (c==5) {
                        if (occur_column6[letter]+1>1)
                            return false;
                        else
                            occur_column6[letter]++;
                        continue;
                    }
                    if (c==6) {
                        if (occur_column7[letter]+1>1)
                            return false;
                        else
                            occur_column7[letter]++;
                        continue;
                    }
                    if (c==7) {
                        if (occur_column8[letter]+1>1)
                            return false;
                        else
                            occur_column8[letter]++;
                        continue;
                    }
                    if (c==8) {
                        if (occur_column9[letter]+1>1)
                            return false;
                        else
                            occur_column9[letter]++;
                        continue;
                    }
                }
            }
            occur_row.clear();
        }
        return true;


    }
};

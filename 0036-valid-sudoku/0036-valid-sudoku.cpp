class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // rows[i][num] -> number exists in row i
        // cols[j][num] -> number exists in column j
        // boxes[k][num] -> number exists in 3x3 box k

        bool rows[9][9] = {};
        bool cols[9][9] = {};
        bool boxes[9][9] = {};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                int num = board[i][j] - '1';

                // Find the 3x3 box
                int box = (i / 3) * 3 + (j / 3);

                // Check duplicate
                if (rows[i][num] ||
                    cols[j][num] ||
                    boxes[box][num]) {
                    return false;
                }

                // Mark as used
                rows[i][num] = true;
                cols[j][num] = true;
                boxes[box][num] = true;
            }
        }

        return true;
    }
};
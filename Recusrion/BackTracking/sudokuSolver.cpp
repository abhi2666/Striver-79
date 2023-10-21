class Solution
{
private:
    // This function will put different values in empty spaces and check for their validity
    // if valid then will return true else will return false and will revert back the
    // changes it made into the board..
    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '.')
                {
                    // an empty space has been found

                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (isValid(i, j, c, board) == true)
                        {
                            board[i][j] = c;
                            // now recursive call will take place
                            if (solve(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                // we can't solve sudoku using this approach
                                // revert the changes back to previous state..
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(int row, int col, int ch, vector<vector<char>> &board)
    {

        for (int i = 0; i < 9; i++)
        {
            // row check
            if (board[row][i] == c)
                return false;
            // col check
            if (board[i][col] == c)
                return false;
            // grid check (sub matrix of size 3 x 3)
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
                return false;
        }
        return true;
    }

public:
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
        return;
    }
};
class Solution {
private:
    void solve(int col, int n, vector<vector<string>>&ans, vector<string>board, vector<int>&left, vector<int>&upperLeft, vector<int>&lowerLeft){
        
        //check if all queens have been placed
        if(col == n){
            ans.pback(board);ush_
            return;
        }
        // check for all the places, wether you can put your queen there or not
        for(int row = 0; row< n; row++){
            if(left[row] == 0 && upperLeft[n-1 + col-row] == 0 && lowerLeft[row + col] == 0){
                // you can place your queen here..mark the position as visited
                left[row] = 1;
                upperLeft[n-1+col-row] = 1;
                lowerLeft[row+col] = 1;
                board[row][col] = 'Q';
                solve(col+1, n, ans, board, left, upperLeft, lowerLeft);
                //once done then mark its position as unvisited again 
                // so that future recursive calls can utilize them
                left[row] = 0;
                upperLeft[n-1+col-row] = 0;
                lowerLeft[row+col] = 0;
                board[row][col] = '.';


            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        // place all the queens in board such that they follow all the rules
        vector<vector<string>>ans;
        string s(n, '.'); // string intialization
        // just put these strings n times into a vector to create the board
        vector<string>board(n);
        for(int i = 0; i < n; i++){
            board[i] = s; // you can use indexes in vector only when you have
            // intialized them with a size..
        }
        // we will update this board only using recursion
        // now we need three hash vectors for hashing purpose
        /*
        we will check for element to the left, upperleftDiagonal and 
        lowerLeftDiagonal
        */
        vector<int>left(n, 0), upperLeftDiag(2*n-1, 0), lowerLeftDiag(2*n-1, 0);
        solve(0, n, ans, board, left, upperLeftDiag, lowerLeftDiag);
        return ans;

    }
};
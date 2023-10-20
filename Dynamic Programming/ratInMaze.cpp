
/*
left --> r, c-1
right -> r, c + 1
up -> r -1 , c
down -> r + 1, c

Important Points--> In this question you cannot go to 0.. you can go to
cell with value 1 only and also you will have to keep track of the cell
that you have already visited so as to avoid any infinite looping 
situation.
You will have to make 4 recursive call for all DLRU and in each call 
you have to check if their index are in the boundary range and if they
are not yet visited and also check if its values is 1 and not 0.

*/

#include <bits/stdc++.h>

void getPaths(int i, int j, int n, vector<vector<int>>&maze, string s, 
vector<vector<int>>&vis, vector<string>&ans){
    
    if(i == n-1 && j == n-1){
        ans.push_back(s);
        return;
    }
    // for each part
    int rows[] = {1, 0, 0, -1};
    int cols[] = {0, -1, 1, 0};
    string directions = "DLRU";
    for(int idx = 0; idx < 4; idx++){
        // will check for each directions but first will check if we can 
        // call for that size or not
        int ni = i + rows[idx];
        int nj = j + cols[idx];
        if(ni >= 0 && nj >= 0 && ni < n && nj < n && !vis[ni][nj] && maze[ni][nj] == 1){
            vis[ni][nj] = 1;
            getPaths(ni, nj, n, maze, s+directions[idx], vis, ans);
            vis[ni][nj] = 0;
        }
    }

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string>ans;
    vector<vector<int>>vis(n, vector<int>(n, 0));
    getPaths(0, 0, n, arr, "", vis, ans);
    return ans;
}
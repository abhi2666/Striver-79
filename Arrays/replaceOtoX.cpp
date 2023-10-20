void dfs(int i, int j, vector<vector<int>>&vis, char**a, int n, int m){
    vis[i][j] = 1;
    int rows[] = {-1, 0, +1, 0};
    int cols[] = {0, +1, 0, -1};
    for(int k = 0; k < 4; k++){
        int ni = i + rows[k];
        int nj = j + cols[k];
        // check if these are valid indexes and if the value at this index is 0
        // and is not yet visited
        if(ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == '0' && !vis[ni][nj]){
            dfs(ni, nj, vis, a, n, m);
        }
    }
}

void replaceOWithX(char** arr, int n, int  m)
{
    vector<vector<int>>vis(n, vector<int>(m, 0)); // to keep track of islands
    // you can look for boundary zeroes from each side one by one
    // top, bottom
    for(int i = 0; i < m; i++){
        if(arr[0][i] == '0' && !vis[0][i]){
            dfs(0, i, vis, arr, n, m);
        }
        
        if(arr[n-1][i] == '0' && !vis[n-1][i]){
            dfs(n-1, i, vis, arr, n, m);
        }
    }

    // left and right
    for(int i = 0; i < n; i++){
        if(arr[i][0] == '0' && !vis[i][0]){
            dfs(i, 0, vis, arr, n, m);
        }

        if(arr[i][m-1] == '0' && !vis[i][m-1]){
            dfs(i, m-1, vis, arr, n, m);
        }
    }
    return;
}
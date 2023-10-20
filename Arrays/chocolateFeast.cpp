#include <bits/stdc++.h> 
vector<int> chocolateFest(vector<int> choco, int x)
{
    // find sum which is greater than x and is closest to start and uses 
    // minimum boxes
    int i = 0, j = 0, finali = -1, finalj = -1, distance = 1e8, sum = 0;
    while(j < choco.size()){
        sum += choco[j++];
        if(sum > x){
            if(distance > j - i){
                distance = j-i;
                finali = i;
                finalj = j;
            }
            sum -= choco[i++];
        }
        else{
            // increase the value of sum
            sum += choco[j++];
        }
    }
    vector<int>res;
    for(int i = finali; i <= finalj; i++){
        res.push_back(choco[i]);
    }
    return res;
}

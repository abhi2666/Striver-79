/*
you have ot maximize the minimum distance between any of the two cows
where every cow should be able to fit into the stalls.

Now the min possible distance between cows can be 1 and the maximum possible 
distance between then is Max-Min elements. Hence it is a sequence of sorted numbers
therefore we can use binary search to find the correct answer.

For each value we will check if we keep this size of distance 
*/

bool isValid(vector<int>&stalls, int dist, int cows){
    // check if we can place all the cows with atleast a distance of dist
    // between them
    int countCows = 1, lastPlaced = stalls[0];
    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i]-lastPlaced >= dist){
            // means it is valid placing we want the distance between cows to be
            // at least "dist"
            countCows++;
            lastPlaced = stalls[i];
        }
        if(countCows == cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    // set the range 
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls[stalls.size()-1] - stalls[0];
    int mid = -1, ans = 0;
    while(low <= high){
        mid = (low + high)/2;
        // check if the value pointed by mid is valid 
        if(isValid(stalls, mid, k)){
            // means current is a possible answer and there can be other better
            // answers
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
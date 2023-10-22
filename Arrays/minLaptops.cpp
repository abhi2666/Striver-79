/*
we will first sort the arrays in order to compare them efficiently
because order of start and end does not matter.
After that we will compare start of next meeting with the end time of 
current meeting..
*/
class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        int laptops = 1;
        int i = 1, j = 0;
        sort(start, start+N);
        sort(end, end+N);
        while(i < N && j < N){
            if(end[j] > start[i]){
                laptops++;
                i++;
            }
            else{
                i++;
                j++;
            }
        }       
        return laptops;
    }
};
/// something is wrong

class Solution{   
public:
    string solve(int arr[], int n) {
        sort(arr, arr+n);
        string res;
        long long first = 0, second = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                first = first*10 + arr[i];
            }
            else{
                second = second*10 + arr[i];
            }
        }
        long long sum = first + second;
        res += to_string(sum);
        return res;
    }
};
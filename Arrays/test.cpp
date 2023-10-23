#include<iostream>
using namespace std;

int main(){
    int a[] = {0, 1, 1, 2, 3, 1, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int left[n];
    left[0] = a[0];
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], a[i-1]);
    }
    for(int i =0 ; i < n; i++){
        cout<<left[i]<<" ";
    }
}
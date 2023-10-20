// string isSubset(int a1[], int a2[], int n, int m) {
//     sort(a1, a1 + n);
//     sort(a2, a2 + n);
    
//     int i = 0, j = 0;
//     while(i < n && j < m){
//         if(a1[i] == a2[j]){
//             i++;
//             j++;
//         }
//         else if(a1[i] < a2[j]) i++;
//         else return "No";
//     }

//     if(j != m) return "No";
//     return "Yes";
// }



string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    int i = 0, j = 0;
    bool isSubset = true;

    while (i < m && j < n) {
        if (a1[j] < a2[i]) {
            j++;
        } else if (a1[j] == a2[i]) {
            i++; j++;
        } else {
            isSubset = false;
            break;
        }
    }

    if (i < m)
        isSubset = false;

    return isSubset ? "Yes" : "No";
}

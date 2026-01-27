// #include<bits/stdc++.h>
// using namespace std;
// vector<int> firstAndLast(vector<int> &arr, int n, int k) {
//     // int n = arr.size();
//     int first = -1, last = -1;
//     int l=0, r = n-1;
//     // For first occurence
//     while(l<=r){
//         int mid = l + (r - l)/2;
//         if(arr[mid]==k){
//             first = mid;
//             r = mid - 1;
//         }
//         else if(arr[mid] < k){
//             l = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//         mid = l + (r - l)/2;
//     }

//     // For last occurence
//     l=0, r = n-1;
//     while(l<=r){
//         int mid = l + (r - l)/2;
//         if(arr[mid]==k){
//             last = mid;
//             l = mid + 1;
//         }
//         else if(arr[mid] < k){
//             l = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//         mid = l + (r - l)/2;
//     }
//     return {first, last};
    
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     vector<int> ans = firstAndLast(arr, n, k);
//     cout<<ans[0]<<" "<<ans[1];
// }


#include <bits/stdc++.h>
using namespace std;

// Single binary search function
int searchPosition(vector<int> &arr, int n, int k, bool findFirst) {
    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == k) {
            ans = mid;
            if (findFirst)
                r = mid - 1;  // move left
            else
                l = mid + 1;  // move right
        }
        else if (arr[mid] < k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter element to search: ";
    cin >> k;

    int first = searchPosition(arr, n, k, true);
    int last  = searchPosition(arr, n, k, false);

    cout << "First Occurrence Index: " << first << endl;
    cout << "Last Occurrence Index: " << last << endl;

    return 0;
}

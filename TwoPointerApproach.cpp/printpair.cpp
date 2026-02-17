// #include<bits/stdc++.h>
// using namespace std;

// bool twosum(vector<int> &arr, int target){
//     int left = 0, right = arr.size() - 1;
//     while(left<right){
//         int sum = arr[left] + arr[right];
//         if(sum == target){
//             return true;
//         }
//         else if(sum < target){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     if (twosum(arr, target))
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

bool twosum(vector<int> &arr, int target, int &left, int &right){
    left = 0;
    right = arr.size() - 1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return true;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int left, right;
    if (twosum(arr, target, left, right)){
        cout << "true" << endl;
        cout << "Pair: " << arr[left] << " " << arr[right];
    }
    else
        cout << "false";

    return 0;
}

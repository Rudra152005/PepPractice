#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max = INT_MIN;
        int sec = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                sec = max;
                max = arr[i];
            }
            else if(arr[i]>sec && arr[i]<max){
                sec = arr[i];
            }
        }
        return (sec == INT_MIN)?-1: sec;
    }
};
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSecondLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}

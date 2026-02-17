// print Common element in 3 Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        // Code Here
        int n = arr1.size();
        int m = arr2.size();
        int n1 = arr3.size();
        
        vector<int> ans;
        int i=0, j=0, k=0;
        
        while(i<n && j<m && k<n1){
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
                ans.push_back(arr1[i]);
                i++; j++; k++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr3[k]){
                j++;
            }
            else{
                k++;
            }
        }
        
    }
};
int main(){
    int n, m, n1;
    cin>>n>>m>>n1;
    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> arr3(n1);

    for(int i=0; i<n1 ; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m ; i++){
        cin>>arr2[i];
    }
    for(int i=0; i<n1 ; i++){
        cin>>arr3[i];
    }
    Solution ob;
    vector<int> ans = ob.commonElements(arr1, arr2, arr3);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}

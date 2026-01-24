// Check if array is sorted print true in not print false

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;    
        
    }
};
int main(){

}
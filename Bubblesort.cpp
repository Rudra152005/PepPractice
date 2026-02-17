#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &arr){
    int n = arr.size();
    bool flag = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n -i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            flag = true;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr);
    return 0;
}
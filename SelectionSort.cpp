#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr) {
    int n = arr.size();


    for(int i=0; i<n; i++){
        int minidx = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        // if(minidx!=i){
        // int temp = arr[minidx];  
        // arr[minidx] = arr[i];
        // arr[i] = temp;
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        // }
        if(minidx!=i){
            swap(arr[minidx], arr[i]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr);
}
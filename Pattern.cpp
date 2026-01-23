// #include "bits/stdc++.h"
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     char b;
//     cin>>b;
//     for(int i=0; i<a; i++){
//         for(int j = 0; j< i ; j++){
//             cout<<b<<" "<<"\n";
//         }
//         cout<<endl;
//     }
// }
#include "bits/stdc++.h"
using namespace std;
int main(){
    int a;
    cin>>a;
    char b;
    cin>>b;
    int i=0;
    while(i < a){
        int j=0;
        while(j < i){
            cout<<b<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    // int x = 10;
    // if(!x){
    //     cout<<"gbhfkhbvk";
    // }
    // int x = 10;
    // int y = x++;
    // cout<<y<<endl;
    // int y = ++x;
    // cout<<y<<endl;
    return 0;
}
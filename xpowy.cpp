// calculate (x^y) using binaray search
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int ans = 1; 
    while(y>0){
        if(y&1){
            ans = ans*x;
        }
        x = x*x;
        y = y/2;
    }
    cout<<ans;
    return 0;
}
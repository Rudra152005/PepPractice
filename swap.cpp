// swap to number
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here

        return {b,a};
        
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Solution s;
    pair<int,int> p = s.get(a,b);
    cout<<p.first<<" "<<p.second<<endl;
}
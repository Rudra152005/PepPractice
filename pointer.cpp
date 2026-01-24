#include <bits/stdc++.h>
using namespace std;
int main(){
    string *ptr = new string;
    *ptr = "Hello world!";
    string **ptr1 = &ptr;
    string ***ptr3 = &ptr1;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
    cout<<***ptr3<<endl;
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;

    stack<long long> s;

    while(n){
        s.push(n%10);
        n/=10;

    }

    long long ans = 0;
    if(s.top()==9){
        ans+=9;
        s.pop();
    }
    while (!s.empty()){
        if(s.top()>4){
            ans= 10*ans - s.top() + 9;
        }
        else{
            ans = 10*ans + s.top();
        }
        s.pop();

    }
   
    cout<<ans;


}
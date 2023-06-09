#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long > v;
    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    sort(v.begin(), v.end());

    cout<<abs(v[1]- v[0]) + abs(v[2] - v[1]);
}
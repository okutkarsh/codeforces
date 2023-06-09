
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int r = 0;
int c = 0;

for(int i = 1; i<=5; i++){
    for(int j= 1;j<=5;j++){
        int g;
        cin>>g;
        if(g==1){
            c = j;
            break;
        }

    }
        if(c!=0){
            r = i;
            break;
    
    }
}

cout<< abs(3-c) + abs(3-r);




}
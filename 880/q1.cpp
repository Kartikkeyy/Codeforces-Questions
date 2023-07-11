//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<map>
#include<algorithm>

#define kar int
#define andrlo cin
#define baharkr cout

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int dal;
        cin>>dal;
        unordered_map<int,int> m;
        // vector<int> v;
        for(int i=0;i<dal;i++){
            int a;
            cin>>a;
            m[a]++;
        }
        bool flag=true;
        for(auto it: m){
            if(it.first==0) continue;
            int a=it.first;
            if(m[a-1]<it.second){
                flag=false;
                break;
            }
        }

        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}
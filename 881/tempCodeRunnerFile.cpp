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
    int tit;
    cin>>tit;

    while(tit--){
        int n;
        cin>>n;
        unordered_map<int,int> m;
        unordered_map<int,bool> check;
        int count=0;
        while(n--){
            int a,b;
            cin>>a>>b;
            m[a]++;
            m[b]++;
            if()
        }

        for(auto it: m){
            if(it.first!=1 && it.second==1){
                check[it.first]=true;
                count++;
            }
        }

        int c;
        cin>>c;
        while(c--){
            int a,b;
            cin>>a>>b;
            if(check[a]==true) a=1;
            else a=count;
            if(check[b]==true) b=1;
            else b=count;
            cout<<a*b<<endl;
        }
    }
return 0;
}
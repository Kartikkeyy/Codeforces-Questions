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
    int tl;
    cin>>tl;
    while(tl--){
        long long int n1,x;
        cin>>n1>>x;
        vector<int> v1,v2,v3;
        for(int i=0;i<n1;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n1;i++){
            int a;
            cin>>a;
            v2.push_back(a);
        }
        for(int i=0;i<n1;i++){
            int a;
            cin>>a;
            v3.push_back(a);
        }
        if(x==0){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int> v;
        int t=x;
        while(t>0){
            v.push_back(x%2);
            x=x/2;
        }

        int i=0,j=0,k=0;
        while(i<n1 && j<n1 && k<n1){
            
        }
    }
return 0;
}
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
        long long int a;
        cin>>a;

        long long ans=0;
        while(a>0){
            ans=ans+a;
            a=a/2;
        }
        cout<<ans<<endl;
    }
return 0;
}
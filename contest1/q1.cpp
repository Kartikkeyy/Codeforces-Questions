//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
// #include<bits/stdc++.h>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        int i=0;
        while(i<s.size()){
            ans=ans+s[i];
            char j=s[i++];
            while(s[i]!=j) i++;
            i++;
        }
        cout<<ans<<endl;
    }
return 0;
}
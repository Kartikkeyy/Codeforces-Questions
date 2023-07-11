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
        int n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;


        if(s1==s2){
            cout<<0<<endl;
            continue;
        }
        int i=0;

        int diff2=0;
        while(i<n){
            if(s1[i]!=s2[n-i-1]) diff2++;
            i++;
        }
        if(diff2==0){
            cout<<2<<endl;
            continue;
        }

        int diff1=0;
        i=0;
        while(i<n){
            if(s1[i]!=s2[i]) diff1++;
            i++;
        }
        int ans=0;
        if(diff1==diff2){
            cout<<diff1*2-1<<endl;
            continue;
        }
        if(diff1<diff2){
            if(diff1%2==0) ans=diff1*2;
            else ans=(diff1)*2-1;
        }
        else{
            if(diff2%2==1) ans=diff2*2;
            else ans=diff2*2-1;
        }
        cout<<ans<<endl;

    }
return 0;
}
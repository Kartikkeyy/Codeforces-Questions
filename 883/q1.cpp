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
        int a;
        cin>>a;

        int ans=0;
        while(a--){
            int f,k;
            cin>>f>>k;

            if(f>k){
                ans++;
            }
        }

        cout<<ans<<endl;
    }
return 0;
}
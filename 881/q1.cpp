//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
// #include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>

#define kar int
#define andrlo cin
#define baharkr cout

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        vector<int> v;
        for(int i=0;i<num;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());
        int i=0,j=num-1;
        long long ans=0;
        while(i<j) ans=ans+v[j--]-v[i++];
        cout<<ans<<endl;
    }
return 0;
}
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
        vector<int> v;
        int m=-1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            m=max(a,m);
            v.push_back(a);
        }

        vector<int> mem(m+1,-1);
        for(int i=n-1;i>=0;i--){
            mem[v[i]]=i;
        }
        int i=n-1;
        int ans=0;

        while(i>=0){
            if(mem[v[i]]<i){
                int count=(i-mem[v[i]])+1;
                int j=mem[v[i]];
                while(i!=j && i>=0){
                    if(mem[v[i]]<i){
                        int c=(i-mem[v[i]])+1;
                        if(c>count){
                            ans=n-1-i;
                            count=c;
                            j=mem[v[i]];
                        }
                    }
                    i--;
                }
                i--;
            }
            else{
                ans++;
                i--;
            }
        }

        cout<<n-ans<<endl;
    }
return 0;
}
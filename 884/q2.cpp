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

        if(n==2){
            cout<<2<<" "<<1<<endl;
        }
        if(n==1){
            cout<<1<<endl;
        }
        if(n>2){
            vector<int> v(n); 
            int k=4;
            v[0]=2;
            v[n-1]=3;
            v[n/2]=1;

            for(int i=1;i<n-1;i++){
                if(i==n/2) continue;
                else v[i]=k++;
            }

            for(auto it: v) cout<<it<<" ";
            cout<<endl;
        }

    }
return 0;
}


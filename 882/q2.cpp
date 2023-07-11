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

        long long int d[a];
        for(int i=0;i<a;i++){
            cin>>d[i];
        }

        int i=0,j=0;
        long long int ma=1;
        while(ma<=1000000000){
            ma=ma*2;
        }
        ma--;
        long long int mi=ma;

        int k=0;
        while(k<a) mi=mi&d[k++];

        int check=ma;

        int count=0;
        while(j<a){
           check=(check & d[j]);
           if(check==0){
               count++;
               check=ma;
            }
            j++;
            // cout<<check<<count<<endl;
        }
        if(mi==0) cout<<count<<endl;

        else cout<<count+1<<endl;
    }
return 0;
}
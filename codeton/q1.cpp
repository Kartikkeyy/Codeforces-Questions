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
        long long int s=0,e=0;
        long long int n1,n2;
        cin>>n1>>n2;
        for(int i=0;i<n1;i++){
            long long int a;
            cin>>a;
            s=s+a;
        }
        for(int i=0;i<n2;i++){
            long long int a;
            cin>>a;
            e=e+a;
        }

        if(s==e) cout<<"Draw"<<endl;
        else if(s>e) cout<<"Tsondu"<<endl;
        else cout<<"Tenzing"<<endl;
    }
return 0;
}
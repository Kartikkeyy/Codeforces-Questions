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
    kar t;
    cin>>t;
    while(t--){

        int n,d,h;

        cin>>n>>d>>h;

        vector<int> iso(n+1);

        int i=1;
        while(i<=n){
            cin>>iso[i++];
        }

        double area = (0.5) * (h) * (d);
        double ok=(h)*(h+2)*(0.5);
        double ratio = (area)/(ok);
        cout<<ratio<<endl;
    }
return 0;
}
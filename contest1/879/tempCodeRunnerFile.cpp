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
        string a,b;
        cin>>a>>b;

        int i=a.size()-1;
        int j=b.size()-1;
        long long int ans=0;

        while(i>=0 && j>=0){
            int t1=(a[i]-'0');
            int t2=(b[j]-'0');

            int c=abs(t1-t2);
            ans=ans+c;

            i--;
            j--;
        }
        while(i>=0){
            ans=int(a[i--]-'0')+ans;
        }
        while(j>=0){
            ans=int(b[j--]-'0')+ans;
        }
        cout<<ans<<endl;
    }
return 0;
}
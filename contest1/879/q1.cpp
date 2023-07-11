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

        int sum=0;
        int count=0;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==-1) count++;
            sum=sum+a;
        }
        // cout<<count<<endl;
        int ans=0;
        if(count%2==1){
            ans++;
            sum=sum+2;
            // cout<<sum<<endl;
            if(sum<0){
                while(sum<0){
                    ans=ans+2;
                    sum=sum+4;
                }
            }
        } 
        else{
            if(sum<0){
                while(sum<0){
                    ans=ans+2;
                    sum=sum+4;
                }
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
// #include<bits/stdc++.h>
#include<cmath>
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
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>q) arr[i]=0;
            else arr[i]=1;
        }

        int i=0;
        long long int ans=0;
        while(i<n){
            if(arr[i]==1){
                int cnsq=0;
                while(arr[i]==1){
                    cnsq++;
                    i++;
                    if(i>=n) break;
                }

                if(cnsq>=k){
                    long long int sum=cnsq-k+1;
                    sum=(sum*(sum+1))/2;
                    ans=ans+sum;
                }
            }
            else i++;
        }
        cout<<ans<<endl;
    }
return 0;
}
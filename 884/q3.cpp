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
        kar n;
        cin>>n;
        vector<long long> v;
        for(kar i=0;i<n;i++){
            kar a;
            cin>>a;

            //hagimari

            v.push_back(a);
        }

        long long sum2=0,sum1=0;
        long long maxi = INT32_MIN;

        for(int i=0;i<n;i++){
            if(i%2){
                if(v[i]>0) sum1+=v[i];
            }
            else if((i%2==0)){
                if(v[i]>0) sum2+=v[i];
            }
        }
        for(int i=0;i<n;i++)  maxi=max(maxi,v[i]);
        
        long long  ans = 0;
        if(sum1>sum2){
            ans=sum1;
        }
        else{
            ans=sum2;
        }
        if(ans==0) cout<<maxi<<endl;
        else cout<<ans<<endl;

        //ok bhai dekh liya answer chl ab development krlai shyd job off campus he leni padegi
    }
return 0;
}

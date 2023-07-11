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
        if(n==1){
            cout<<'a'<<endl;
            continue;
        }
        else if(n==2){
            cout<<"ab"<<endl;
            continue;
        }
        else{
            long long distinct=0;




            // aasaf


            
            for(int i=2; i<n; i++){
                if(n%i!=0){
                    distinct = i;
                    break;
                }
            }
            string s = "abcdefghijklmnopqrstuvwxyz";
            long long count=0;

            while(count!=n){
                cout<<s[count%distinct];
                count++;
            }
            cout<<endl;
        }    

    }
return 0;
}
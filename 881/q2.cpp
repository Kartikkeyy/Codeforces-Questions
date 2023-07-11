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
    int tit;
    cin>>tit;
    while(tit--){
        int num;
        cin>>num;
        int count=0;
        long long int sum=0;
        bool flag=true;
        while(num--){
            int a;
            cin>>a;
            if(a<=0){
                if(flag && a!=0){
                    count++;
                    flag=false;
                }
            }
            else{
                if(!flag) flag=true;
            }

            sum=sum+abs(a);
        }
        cout<<sum<<" "<<count<<endl;
    }
return 0;
}
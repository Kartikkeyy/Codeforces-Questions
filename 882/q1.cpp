//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
#include<vector>
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

        kar a,b;


        cin>>a>>b;
        vector<int> v;

        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            v.push_back(x);
            //ha lund lai le mera
            //tujhse he baat kr rha hu stalker

        }

        vector<int> dif;

        for(int i=0;i<a-1;i++){
            dif.push_back(abs(v[i]-v[i+1]));
        }

        sort(dif.begin(),dif.end());

        long long sum = 0;

        for(int i=0;i<a-b;i++){
            sum+=dif[i];
        }
        cout<<sum<<endl;
    }
        // for(auto it: dif){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
    // }
return 0;
}
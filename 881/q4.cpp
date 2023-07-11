//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

#include<iostream>
#include<string>
// #include<bits/stdc++.h>
#include<map>
#include<algorithm>
#include<vector>
#include<unordered_map>

#define kar int
#define andrlo cin
#define baharkr cout

using namespace std;

unordered_map<int,vector<int>> m;
unordered_map<int,int> memo;
void dfs(long long x , long long jad = -1){  
    if (m[x].size()==1 && x!=1) memo[x] = 1;

    for (auto v:m[x]) if (v!=jad) dfs(v,x) , memo[x] += memo[v];  
}
int main(){
    int tit;
    cin>>tit;

    while(tit--){
        m.clear();
        memo.clear();
        int n;
        cin>>n;
        n--;
        int o=n;
        while(n--){
            int a,b;
            cin>>a>>b;
            m[a].push_back(b);
            m[b].push_back(a);
        }
        
        dfs(1);

        int c;
        cin>>c;
        while(c--){
            int a,b;
            cin>>a>>b;
            cout<<memo[a]*memo[b]<<endl;
        }
    }
return 0;
}
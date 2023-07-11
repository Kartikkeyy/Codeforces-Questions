
#include <bits/stdc++.h>  
#include <math.h>  
#pragma GCC optimize("unroll-loops")  
using namespace std;  
#define pi pair<long long , long long>  
#define pii pair<long long , pair<long long , long long>>  
const int maxm = 8e5 + 6;  
const long long mod = 10067;  
const int sq = 400;  
typedef long long ll;  
#define pb push_back  
#define fi first  
#define se second  
ll l,r,mid;  
ll n,m;  
bool isval(int mid){  
    //cout << mid <<" " << mid*mid-mid <<endl;  
    if (((mid-1)*mid)/2 < m) return 0;  
    return 1;  
}  
bool vis[maxm] , gos[maxm];  
ll darage[maxm] , ss , mm , po;  
queue<int> q;  
vector<int> g[maxm] , z[maxm];  
ll pedaret[maxm];  
multiset<ll> st , wtf , ajab;  
ll rp[maxm];  
pi w[maxm],ww[maxm];  
//ll rw[maxm][maxm];  
ll dp[maxm];  
ll lft[maxm] , rgh[maxm];  
map<ll,ll> mp,pm,lx,mo,om;  
vector<ll> vec;  
  
void dfs(ll x , ll jad = -1){  
    if (g[x].size()==1 && x!=1) darage[x] = 1;  
    for (auto v:g[x]){  
        if (v!=jad) dfs(v,x) , darage[x] += darage[v];  
    }  
}  

int main(){  
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);  
    int t;  
    cin >>t;  
    while (t--){  
        cin >>n;  
        for (int i=1; i<=n; i++) g[i].clear() , darage[i] = 0;  
        for (int i=1; i<n; i++){  
            cin>>l>>r;  
            g[l].pb(r),g[r].pb(l);  
        }  
        dfs(1);  
        cin >>m;  
        while (m--){  
            cin >>l>>r;  
            cout<<darage[l]*darage[r]<<endl;  
        }  
    }  
}
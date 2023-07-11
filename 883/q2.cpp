// //Bhai Machine Learning kru ki software engineering
// //Smjh nhi aa rha bhai

// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>
// #include<map>
// #include<algorithm>

// #define kar int
// #define andrlo cin
// #define baharkr cout

// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int ptcp,ques,time;
//         cin>>ptcp>>ques>>time;

//         vector<vector<int>> v;

//         for(int i=0;i<ptcp;i++){
//                 vector<int> save;
//             for(int j=0;j<ques;j++){
//                 int a;
//                 cin>>a;
//                 save.push_back(a);
//             }
//             sort(save.begin(),save.end());
//             v.push_back(save);
//         }

//         if(ptcp==1){
//             cout<<1<<endl;
//             continue;
//         }

//         int x=0,y=0;
//         int count=0;
//         int i=0,j=0;
//         int ans=1;

//         while(count<time){
//             count=count+v[j][i++];
//             if(count<=time){
//                 x++;
//                 y=y+count;
//             }
//         }
//             // cout<<x<<" "<<y<<endl;
//         j++;

//         while(j<ptcp){
//             count=0;
//             i=0;
//             int m=0,n=0;

//             while(count<time){
//             count=count+v[j][i++];

//             if(count<=time){
//                 m++;
//                 n=n+count;
//             }
//            }
//         //    cout<<m<<" "<<n<<endl;

//            if(m>x) ans++;
//            else if(m==x && n<y) ans++;

//            j++;
//         }

//         cout<<ans<<endl;
//     }
// return 0;
// }

//code aisa likho ki,
//4 log debug krne se dare

#include<bits/stdc++.h>
using namespace std;

bool compit(const pair<long long,long long> &x, const pair<long long,long long> &y){
    if(x.first!=y.first){
        return (x.first<y.first);
    }
    else{
        return (x.second>y.second);
    }
}
int main()
{
    long long  t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<vector<long long> > time;
        for(long long i=0;i<m;i++){
            vector<long long> prob;
            for(long long j=0;j<n;j++){
                long long a;
                cin>>a;
                prob.push_back(a);
            }
            sort(prob.begin(),prob.end());
            time.push_back(prob);
        }
        vector<pair<long long,long long> > v;
        bool flag = false;
        long long rudo = 0;
        long long rudo_time = 0;
        for(long long i=0;i<m;i++){
            long long  sum = 0;
            long long  total = 0;
            long long  point = 0;
            for(long long  j=0;j<n;j++){
                // sum+=time[i][j];
                if(sum + time[i][j]<=h){
                    sum+=time[i][j];
                    total+=sum;
                    point++;
                }
                else{
                    break;
                }
            }
            pair<long long,long long > p;
            p = make_pair(point,total);
            v.push_back(p);
            if(flag==false){
                rudo=point;
                rudo_time = total;
            }
            flag=true;
        }

        sort(v.rbegin(),v.rend(),compit);
        long long rank = 0;
        for(auto i : v){
            rank++;
            if(i.first==rudo && i.second==rudo_time){
                break;
            }
        }
        cout<<rank<<endl;
        // for(long long i=1;i<v.size();i++){
        //     if(rudo<v[i].first){
        //         rank++;
        //     }
        //     else if(rudo==v[i].first && rudo_time>v[i].second){
        //         rank++;
        //     }
        // }
        // rank++;
        // cout<<rank<<endl;
    }
    return 0;
}
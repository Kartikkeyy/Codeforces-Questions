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

kar main(){
    kar t;
    cin>>t;

    while(t--){
        vector<vector<char> > hagimaru;
        for(kar i=0;i<3;i++){
            vector<char> vec;

            for(kar j=0;j<3;j++){
                char c;
                cin>>c;
                vec.push_back(c);
            }

            hagimaru.push_back(vec);
        }
        if( hagimaru[0][0]==hagimaru[0][1]&& hagimaru[0][1]==hagimaru[0][2] && hagimaru[0][0]!='.') cout<<hagimaru[0][0]<<endl;

        else if(hagimaru[1][0]==hagimaru[1][1]&& hagimaru[1][1]==hagimaru[1][2] && hagimaru[1][0]!='.') cout<<hagimaru[1][0]<<endl;

        else if( hagimaru[2][0]==hagimaru[2][1] && hagimaru[2][1]==hagimaru[2][2] && hagimaru[2][0]!='.'){
            cout<<hagimaru[2][0]<<endl;
        }

        else if( hagimaru[0][0]==hagimaru[1][0]&& hagimaru[1][0]==hagimaru[2][0] && hagimaru[0][0]!='.') cout<<hagimaru[0][0]<<endl;
        else if( hagimaru[0][1]==hagimaru[1][1] && hagimaru[1][1]==hagimaru[2][1] && hagimaru[0][1]!='.'){
            cout<<hagimaru[0][1]<<endl;
        }



        // hay raam

        else if(  hagimaru[0][2]==hagimaru[1][2] && hagimaru[1][2]==hagimaru[2][2] && hagimaru[0][2]!='.') cout<<hagimaru[0][2]<<endl;

        else if(  hagimaru[0][0]==hagimaru[1][1] && hagimaru[1][1]==hagimaru[2][2] && hagimaru[0][0]!='.') {
            cout<<hagimaru[0][0]<<endl;
        }
        else if( hagimaru[0][2]==hagimaru[1][1] && hagimaru[1][1]==hagimaru[2][0] && hagimaru[0][2]!='.'){
            cout<<hagimaru[0][2]<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
return 0;
}
/*
Queue AZ101 :  Just simpulate the process with standard functions of queue
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int Q;cin>>Q;
    cin.ignore(); //switch from cin -> getline
    queue<int> q;
    while(Q--){
        string line;
        getline(cin,line);
        stringstream _cin(line);
        string op ;_cin>>op;
        if(op=="add"){
            int x;_cin>>x;
            q.push(x);
        }else if(op=="remove"){
            if(!q.empty()) q.pop();
        }
        else{
            if(!q.empty()) cout<<q.front()<<'\n';
            else cout<<0<<'\n';
        }
    }
}
signed main(){
    int t;cin>>t;
    while(t--) solve();
} 

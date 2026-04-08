#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q;cin>>q;
    cin.ignore();
    map<string,int> mp;
    while(q--){
        string line;
        getline(cin,line);
        stringstream _cin(line);
        string op;_cin>>op;
        if(op=="add"){
            string x;int y;_cin>>x>>y;
            mp[x]=y;
        }else if(op=="erase"){
            string x;_cin>>x;
            if(mp.find(x)!=mp.end()) mp[x]=0;
        }        
        else{
            string x;_cin>>x;
            if(mp.find(x)!=mp.end()) cout<<mp[x]<<'\n';
            else cout<<0<<'\n';
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

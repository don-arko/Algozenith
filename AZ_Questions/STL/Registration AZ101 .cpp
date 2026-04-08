/*
RegistrationAZ101 : 
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    map<string,int> mp;
    while(n--){
        string s;cin>>s;
        if(mp.find(s)!=mp.end()) {
            cout<<s<<mp[s]<<'\n';mp[s]++;
        }
        else{
            mp[s]++;cout<<"OK\n";
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

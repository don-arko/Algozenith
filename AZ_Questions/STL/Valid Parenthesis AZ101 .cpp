#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    int d=0;
    int ans=0;
    for(char ch:s){
        if(ch=='(') d++;
        else d--;
        if(d<0){
            ans++;d=0;
        }
    }
    if(d!=0)ans+=abs(d);
    cout<<ans<<'\n';
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

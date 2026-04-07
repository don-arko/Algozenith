/*
Products of Digits AZ101
*/

#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long int 
void solve(){
    int n;cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        int temp;cin>>temp;
        ans=ans*temp%MOD;
    }cout<<ans<<'\n';
}
int32_t main(){   //O(T*N) = ∀T ∑ N  <= 1e6 {given in Q} <=1e8 hence passes
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

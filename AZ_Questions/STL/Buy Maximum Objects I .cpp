/*
Buy Maximum Objects I : Idea is simple to buy maximum cnt of object ; sum of prices of object <= M  minimise the price i.e. sort and take object from front as long as M>=0
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int a[n];for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(m-a[i]>=0){
            m-=a[i];cnt++;
        }else break;
    }
    cout<<cnt<<'\n';
}
int32_t main(){   //TC = O(T*N) = ∀ T ∑ N <= 5e5 {given} =< 1e8 hence passes
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

/*
Number of Intersecting Diagonals : Each each distinct quadruple of vertices gives 1 distinct POI or a pair of intersecting diagonals
                                   hence # intersection dia = C(n,4)  {in terms of pairs}
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD=1e9+7;
int  binpow(int a ,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m;
    else{
        int temp=binpow(a,b/2,m);
        return temp*temp%m;
    }
}
int inv_4f=binpow(24,MOD-2,MOD);
int compute(int n){
    int ans=(n*(n-1)%MOD) * ((n-2)*(n-3)%MOD) %MOD * inv_4f % MOD;
    return ans;
}
void solve(){
    int n;cin>>n;
    cout<<compute(n)<<'\n';//    cout<<compute(n)<<'\n'; 
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

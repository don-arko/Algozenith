/*
Number of Diagonals : ans is C(n,2)-n = n(n-3)/2
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD=1e9+7;
int binpow(int a,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m;
    else{
        int temp=binpow(a,b/2,m);
        return temp*temp%m;
    }
}
int inv_2=binpow(2,MOD-2,MOD);

int compute(int n){   //O(logMOD)
    int ans=(n*(n-3)%MOD)*inv_2%MOD;
    return ans;
}
void solve(){
    int n;cin>>n;
    //cout<<compute(n)<<'\n';
    int ans=compute(n);
    cout<<ans<<'\n';
}
int32_t main(){             //O(TlogMOD)
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

/*
Number of parts in Convex Polygon : 

                                                Contribution     Total Contri
Initially    #parts =1                              +1               1
each dia adds one extra part                        +1               {nC2-n}*1
each idia pair adds one extra part                  +1               {nC4}*1
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
int inv(int a){
    return binpow(a,MOD-2,MOD);
}
const int inv_2=binpow(2,MOD-2,MOD);
int compute1(int n){
    return (n*(n-3)%MOD)*inv_2%MOD;
}
const int inv4f=binpow(24,MOD-2,MOD);
int compute2(int n){
    return n*(n-1)%MOD * ((n-2)*(n-3)%MOD)%MOD * inv4f %MOD;
}
void solve(){
    int n;cin>>n;
    int ans=(1+compute1(n)+compute2(n))%MOD;
    cout<<ans<<'\n';
}
signed main(){
    int t;cin>>t;
    while(t--)solve();
}



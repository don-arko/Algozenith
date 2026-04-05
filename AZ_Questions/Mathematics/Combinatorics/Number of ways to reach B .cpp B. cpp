#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int MOD=1e9+7;
const int MAX=1e6; // range of N+M = 1e5+1e5=1e6
int fact[MAX+1],inv_fact[MAX+1];
int binpow(int a,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m; //p fits in LL
    else{
        int temp=binpow(a,b/2,m); //no need to %m as binpow already returns moded value
        return temp*temp%m;
    }
}
void factorials(){
    fact[0]=1;
    for(int i=1;i<=MAX;i++){
        fact[i]=i*fact[i-1]%MOD; //product fits in LL
    }
    inv_fact[MAX]=binpow(fact[MAX],MOD-2,MOD);
    for(int i=MAX-1;i>=0;i--){
        inv_fact[i]=(i+1)*inv_fact[i+1]%MOD; //product fits in LL
    }
}
int nCr(int n,int r){
    if(r>n) return 0;
    return fact[n]*(inv_fact[n-r]*inv_fact[r]%MOD)%MOD;//both the product fit in LL
}
void solve(){
    int n,m;cin>>n>>m;
    cout<<nCr(n+m,m)<<'\n';
}
signed main(){          //O(T+MAX)=1e5+1e6 <=5e7
    int t;cin>>t;
    factorials();  //precompute all the facts in O(1e6)
    while(t--){    //O(T)
        solve();
    }
}

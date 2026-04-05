/*
Number of ways to Reach B :

ans = Permutations of N right and M up = C(n+m,m)
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
const int N=1e6;  //n+m<=1e6
int fact[N+1],inv_fact[N+1];
void precompute(){              //O(N) for precomputation
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=i*fact[i-1]%MOD;
    }
    inv_fact[N]=binpow(fact[N],MOD-2,MOD);
    for(int i=N-1;i>=0;i--){
        inv_fact[i]=(i+1)*inv_fact[i+1]%MOD;
    }
}
int nCr(int n,int r){   //O(1) per test case
    if(r<0 || r>n) return 0;
    return fact[n]*(inv_fact[n-r]*inv_fact[r]%MOD)%MOD;
}
void solve(){
    int n,m;cin>>n>>m;
    cout<<nCr(n+m,n)<<'\n';
}
signed main(){              //O(T+N) <=1e8
    precompute();           //O(N)
    int t;cin>>t;
    while(t--)solve();      //O(T*1)
}

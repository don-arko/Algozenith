/*
Inefficient Program 

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
const int inv_2=binpow(2,MOD-2,MOD);
int sum(int n){     //summation 1 to n
    n%=MOD;
    int ans=n*(n+1)%MOD;
    ans=ans*inv_2 %MOD;
    return ans;
}
int get(int r,int m){ //calculates get(1,r,m)
    int cycle=r/m; cycle %=MOD; //as cycle may exceed MOD
    int f_sum=sum(m-1);
    int p_sum=sum(r%m);
    int ans=(cycle*f_sum%MOD+p_sum)%MOD;
    return ans;
}
void solve(){
    int l,r,m;cin>>l>>r>>m;
    int ans=get(r,m)-get(l-1,m); //concept of prefix sum
    //modular subtraction -> neg ans possible
    cout<<((ans%MOD)+MOD)%MOD<<'\n';
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

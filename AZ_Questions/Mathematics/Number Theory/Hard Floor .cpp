/* 
Hard Floor: 
*/

#include<bits/stdc++.h>
const int MOD=1e9+7;
#define int long long int
using namespace std;
int binpow(int a,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m;
    else{ 
        int temp=binpow(a,b/2,m);
        return temp*temp%m;
    }
}
int summation(int n,int m){    //  harmonic lemma based summation opti :  O(√n) 
    int sum=0;
    for(int la,i=1;i<=n;i=la+1){
        la=n/(n/i);  //last idx ; f(i)=f(la) where i the fist idx
        int len=(la-i+1);
        len%=MOD; //as len can be > MOD
        sum=(sum+len*binpow(n/i,m,MOD)%MOD)%MOD;
    }
    return sum;
}
void solve(){
    int n,m;cin>>n>>m;
    cout<<summation(n,m)<<'\n';
}
int32_t main(){
    solve();
}

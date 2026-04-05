/* 
Sieve of Eratosthenes Revisited : Segmented Sieve

*/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<int> sieve(int N){
    vector<bool> is_prime(N+1,true);
    is_prime[0]=is_prime[1]=false;
    vector<int> prime;
    for(int i=2;i<=N;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j=i*i;j<=N;j+=i){
                is_prime[j]=false;
            }
        }
    }return prime;
}
vector<int> segsieve(int l,int r){
    vector<int> base_prime=sieve(ceil(sqrt(r)));
    vector<bool> is_prime(r-l+1,true);
    if(l==1) is_prime[0]=false;
    for(auto p:base_prime){
        int curmul=((l+p-1)/p)*p;
        curmul=max(p*p,curmul);
        while(curmul<=r){
            is_prime[curmul-l]=false;
            curmul+=p;
        }
    }
    vector<int> prime;
    for(int i=0;i<r-l+1;i++){
        if(is_prime[i]) prime.push_back(i+l);
    }
    return prime;
}
void solve(){
    int l,r;cin>>l>>r;
    vector<int> prime=segsieve(l,r);
    cout<<prime.size()<<'\n';
    for(auto x:prime){
        cout<<x<<' ';
    }
}
int32_t main(){
    solve();
}

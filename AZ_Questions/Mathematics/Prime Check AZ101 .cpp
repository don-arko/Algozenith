/* 
Prime Check AZ101
*/

#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }return true;
}
void solve(){
    int n;cin>>n;
    cout<<((is_prime(n))?"YES\n":"NO\n");
}
int32_t main(){     //O(T√n)=1e2 * 1e3.5 <= 1e8
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

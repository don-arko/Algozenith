/*
Divide the Piles:
*/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
     return b?gcd(b,a%b):a;
}
void solve(){
    int n; cin>>n;
    int g=0; // identity for gcd
    for(int i=1;i<=n;i++){
        int temp;cin>>temp;
        g=gcd(g,temp);
    }
    //if greatest gcd of all array elements is >=2 then x could be just the gcd
    // # piles of a[i] {of size x} =a[i]/gcd(a[i] ∀i)
    cout<<((g==1)?"No\n":"Yes\n");
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

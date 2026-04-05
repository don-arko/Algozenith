/*
Can you make C
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
void solve(){
    int a,b,c;cin>>a>>b>>c;
    //bezout 's identity 
    int g=gcd(a,b);
    cout<<((c%g==0)?"Yes\n":"No\n");
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

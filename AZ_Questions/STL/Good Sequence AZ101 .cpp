/*
Good Sequence : 
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    map<int,int> mp; //freq array
    int a[n];
    for(int i=0;i<n;i++){    //O(n)
        cin>>a[i];
        mp[a[i]]++;
    }
    int cnt=0;
    for(auto v:mp){   //O(n) as getting mp.begin() is O(1) and then in each iteration we can get it++ in O(1)
        if(v.first!=v.second){
            if(v.second<v.first) cnt+=v.second;
            else cnt+=v.second-v.first;
        } 
    }cout<<cnt<<'\n';
}
int32_t main(){    // O(T*N) = ∀T ∑N <=1e6 {given} <=1e8 and hence passes
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

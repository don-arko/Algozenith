/*
RegistrationAZ101 : 
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){                       //O(nlogn)
    int n;cin>>n;  
    map<string,int> mp;             //O(1)
    while(n--){                     //O(nlogn)
        string s;cin>>s;
        if(mp.find(s)!=mp.end()) {  //O(logn)
            cout<<s<<mp[s]<<'\n';mp[s]++;
        }
        else{                       //O(logn)
            mp[s]++;cout<<"OK\n";
        }
    }
}
int32_t main(){                     //O(T* nlogn)   = 
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

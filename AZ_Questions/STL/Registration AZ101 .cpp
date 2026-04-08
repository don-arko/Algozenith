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
int32_t main(){                     // O(T* NlogN)   now given ∀T ∑N <=1e6 {given}  so O(T* NlogN)= ∀T ∑(NlogN) = ∀T logN . ∑N = 20*1e6 = 1e7 <=1e8  {assuming logN to be worst case each time hence logN const and can be taken out of summation}
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

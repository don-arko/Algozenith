/*
    Towers AZ101 
*/


#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++) cin>>a[i];

    multiset<int> top; // stores the top of each each in sorted order
    for(auto x:a){ // x is the block coming
        if(top.empty()){
            top.insert(x);
            continue; //don't perform the rest line for this iteration
        }
        //top is not empty , due to use of continue

        //iterate the tops and find the smallest top just greater than x and accomodate x in that tower
        bool found=false;
        for(auto it=top.begin();it!=top.end();it++){
            if(x<*it){  //this is the first top > x , can be also found using upperbound
                top.erase(it); // x is the new top for this tower
                top.insert(x);
                found=true;
                break; //don't go for other tops >x
            }
        }
        if(!found){ //x cannot be inserted in any existing tower
            top.insert(x);
        }
    }
    cout<<top.size()<<'\n'; // alas #tops = #towers
}
signed main(){
    int t;cin>>t;
    while(t--) solve();
}

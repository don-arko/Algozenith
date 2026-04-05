/* 
Euler's Phi Function 

*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> pfact(int x){    //O(√x)
    vector<int> ans;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            while(x%i==0){
                x/=i;
            }
            ans.push_back(i);
        }
    }
    if(x>1) ans.push_back(x);
    return ans;
}
int phi(int x){                      //O(√x+logx)=O(√x)
    int ans=x;                          
    vector<int> prime=pfact(x);      //O(√x)
    for(auto p:prime){               //O(logx)
        ans-=ans/p;
    }return ans;
}
void solve(){
    int x;cin>>x;
    cout<<phi(x)<<'\n';
}
int32_t main(){
    solve();
}

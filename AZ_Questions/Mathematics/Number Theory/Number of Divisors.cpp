/*
Number of Divisors 
*/

//Implementation 1
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pfact(int x){    //O(√x)
    vector<pair<int,int>> ans;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            int cnt=0;
            while(x%i==0){
                x/=i;cnt++;
            }
            ans.push_back({i,cnt});
        }
    }
    if(x>1) ans.push_back({x,1});
    return ans;
}
int cnt_div(int x){     //O(√x+logx)=O(√x)
    auto prime=pfact(x);                //O(√x)
    int div=1;
    for(auto p:prime){                  //O(logx)
        div*=(1+p.second);
    }return div;
}
void solve(){
    int n;cin>>n;
    cout<<cnt_div(n)<<'\n';   //O(√x)
}
int32_t main(){                //O(T√x) = 1e3* 1e3.5 = 1e6.5<= 1e8
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}


//Implementation 2
#include<bits/stdc++.h>
using namespace std;
int cntdiv(int n){
    int cnt=0;
    for(int i= 1;i*i<=n;i++){
        if(n%i==0)cnt+=2;
        if((i*i) ==n)cnt--; //in this case pair doesnt contain disnt divs
    }return cnt;
}
void solve(){
    int n;cin>>n;
    cout<<cntdiv(n)<<"\n";
    
}
signed main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}

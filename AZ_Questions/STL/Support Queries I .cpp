#include<bits/stdc++.h>
using namespace std;
#define int long long int
struct bag{
    int cur_sum=0;
    map<int,int> m;
    void insert(int x){
        cur_sum+=x;
        m[x]++;
    }
    void remove(int x){
        if(m.find(x)!=m.end()){ 
            cur_sum-=x;
            m[x]--;
            if(m[x]==0){
                m.erase(x); // key values are unique in map
            }
        }
    }
    int get_min(){
        return (m.empty())?-1:m.begin()->first; 
    }
    int get_max(){
        return (m.empty())?-1:m.rbegin()->first; 
    }
    int sum(){
        return cur_sum;
    }
};
void solve()
{   int q;cin>>q;
    cin.ignore();
    bag a;
    while(q--){
        int op;cin>>op;
        string x;cin>>x;
        if(op==1){
            a.insert(stoi(x));
        }else if(op==2){
            a.remove(stoi(x));
        }else if(op==3){
            cout<<a.get_min()<<'\n';
        }else if(op==4){
            cout<<a.get_max()<<'\n';
        }else{
            cout<<a.sum()<<'\n';
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}

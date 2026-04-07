/*
Stack AZ101 : just simulate the question operations with std stack operations

*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q;cin>>q;
    stack<int> st;
    cin.ignore(); //switch between cin and getline
    while(q--){
        string line ;
        getline(cin,line);
        stringstream _cin(line);
        string op;_cin>>op;
        if(op=="add"){
            int x;_cin>>x;
            st.push(x);
        }
        else if(op == "remove"){
            if(!st.empty()) st.pop();
        }
        else{
            if(!st.empty()) cout<<st.top()<<'\n';
            else cout<<0<<'\n';
        }
    }


}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

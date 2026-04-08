/*
Common Abosule Difference : This is pretty standard technique to count the number of suitable pairs (i,j) ; i!=j 
                            At each j we find the no of suitable elements that has appeared before j by m[tar] &
                            thenafter we increment the freq of curr=j as we don't want to inc j in potential suitable candidates since i!=j
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++){
        int curr;cin>>curr;
        int t1=curr-k;  //target 1 , can be neg but no worries as their freq will always be 0 as they are absent in the array
        int t2=curr+k;
        ans+=mp[t1]; 
        if(t2!=t1) ans+=mp[t2]; //avoid overcounting if k=0 then t1=t2
        mp[curr]++;
    }cout<<ans<<'\n';
} //if K!=0 {given} hence no check req t1 and t2 are always distinct
void solve(){
    int n,k;cin>>n>>k;
    map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++){
        int curr;cin>>curr;
        ans+=mp[curr-k]+mp[curr+k];
        mp[curr]++;
    }cout<<ans<<'\n';
}
signed main(){
    int t;cin>>t;
    while(t--) solve();
}

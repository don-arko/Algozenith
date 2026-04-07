/*
Generating Permutations AZ101 : 

First generate the lex smallest perm , then next_perm(a,a+n) rearranges a to next greater perm if it exists and returns true . when next greater perm do not exist next_perm returns false then we stop


*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    //smalles lex perm
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    //start printing all the perm in lex order using next_permutation 
    do{
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;
    }while(next_permutation(a,a+n));
}
int32_t main(){
    solve();
}

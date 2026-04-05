/*
Paired Cubes: 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++) cin>>a[i];
    int ans =0;
    map<int,int> m ; //help to find the number of suitable pairs {std technique}
    for(auto x:a){
        //prime factorisation of x ; each exp is exp%3
        int norm =1;
        int tar=1;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                int cnt=0;
                while(x%i==0){
                    cnt++;x/=i;
                }
                cnt%=3;
                int k=(3-cnt)%3; //for cnt=0 k becomes  3 which should be considered as 0 only
                                //meaning if some pf is not present in norm then it should also not be present in tar 
                                //not that tar has that factor raise to 3
                                //these creates 1 as norm and tar 
                
                while(cnt--) norm*=i;
                while(k--) tar*=i;
            }
        }
        if(x>1){ //cnt=1 for sure
            norm*=x;
            tar*=x*x; //3-cnt=2 for sure
        }
        //pfact done ; norm x = pfact ; {exp %3} and tar x is created 

        //finding suitable pairs
        ans+=m[tar] ;// how many suitable match I have seen previously for cur element , that many pairs are possible for cur element for now
        m[norm]++; //add the curr to hashmap
    }
    cout<<ans<<'\n';
}
int32_t main(){
    solve();
}

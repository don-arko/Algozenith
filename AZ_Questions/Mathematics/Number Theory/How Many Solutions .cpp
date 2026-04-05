/* How Many solutions 

1/a + 1/b = 1/n 
        ≡
(a-n).(b-n) = n^2     ; a,b are floating points with atmost d digits after decimal point
        ≡ 
10^d*(a-n) . 10^d*(a-n) = (10^d * n)^2 
        ≡
    x   .       y       = (2^d*5^d*n)^2  ; x,y are now integers as multiplication with 10^d converts (a-n) or (b-n) to integers for sure 

Let n'=(2^d*5^d*n)
so number of solutions = 2*d(n'^2)-1
*/
#include<bits/stdc++.h>
using namespace std;
const int MOD=1e6+7;
#define int  long long int
int solve(int n,int d){  //n>0 and d>=0a
    
    //modification of pfact(n) -> pfact(n^2) -> pfact(n'^2)
    map<int,int> m; //helps in adding 2^d and 5^d in prime fact of n^2  to ; it converts to pfact of n'^2
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            m[i]+=2*cnt; //2 because we want pfac(n^2) from pfact(n)
        }
    }
    if(n>1)m[n]+=2;
    //pfact over

    //modification of pfact(n^2) to  n'^2
    m[2]+=2*d;
    m[5]+=2*d; 
    
    //#divisors for n'^2
    int div=1;
    for(auto p:m){
        //cout<<p.first<<' '<<p.second<<'\n';
        div=div*(1+p.second)%MOD;
    }
    int ans = 2*div-1; //#solutions = 2* (divisors of n'^2) - 1 
    //modular sub => ans could become neg
    return ((ans%MOD)+MOD)%MOD;
}
signed main(){
    while(true){
        int n,d;cin>>n>>d;
        if(!n && !d) break;
        cout<<solve(n,d)<<'\n';
    }
}

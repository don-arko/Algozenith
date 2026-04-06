/*
ExponentiationAZ101 : 2nd application of Fermat's Litte Theorem with crititcal edge cases

Powers of 0 :

0^n = { 0    ; n>0
      { 1    ; n=0 {only in Programming otherwise inderterminate}
      {undef ; n<=


A^B^c =     A^0 = 0   ;  {B^C=0 -> B=0 and C!=0}  as powers of 0 is 0 expect for exp=0 whch is 1
        _____________________________________
                        {B^C !=0 -> B!=0 OR C=0} -> n>=0
            
            0^n = 0 ; n>=0  {A=0}

                           ____________ A=0(mod p) -> 0^n = 0 ; n>=0  merge with case 2 
            A^B^C   ______/
                          \
                            ___________A!=0(mod p) : apply FLT
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long int
//const int MOD=1e9+7;
int binpow(int a,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m;
    else{
        int temp=binpow(a,b/2,m);
        return temp*temp%m;
    }
}
void solve(){
    int a,b,c,p;cin>>a>>b>>c>>p;
    if(b==0 && c!=0){   //Case 1  : b^c=0 -> a^0=1
        cout<<1<<'\n';
    }else{              //case 2 or 3 : b^c!=0 -> b^c > 0 
        if(a==0 || a%p==0 ){
            cout<<0<<'\n';
        }else{          //case 3b
            int ans=binpow(a,binpow(b,c,p-1),p);
            cout<<ans<<'\n';
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

#include<bits/stdc++.h>
using namespace std;
#define int long long int
int MOD=1e9+7; //updated by input MOD value

int binpow(int a,int b,int m){
    a%=m;
    if(b==0) return 1;
    if(b&1) return a*binpow(a,b-1,m)%m;
    else{
        int temp=binpow(a,b/2,m);
        return temp*temp%m;
    }
}
int inv(int a){
    return binpow(a,MOD-2,MOD);
}
int add(int a,int b){
    return (a+b)%MOD;
}
int sub(int a,int b){
    int ans =(a-b)%MOD;
    return ((ans%MOD)+MOD)%MOD;
}
int mul(int a,int b){
    return a*b%MOD;
}
int divs(int a,int b){
    return a*inv(b)%MOD;
}
int res(int a,int b,char op){
    if(op=='+') return add(a,b);
    else if(op=='-') return sub(a,b);
    else if(op=='*') return mul(a,b);
    else return divs(a,b);
}
void solve(){
    string s;
    getline(cin,s);
    stringstream _cin(s); // _cin is like a input string containing the entrie line

    //parsing the input
    int a,b,c;
    char op1,op2;
    string s1,s2,s3;  //temp string
    _cin>>s1>>op1>>b>>op2>>s2>>s3>>MOD;

    a=stoi(s1.substr(1)); //stoi is opposite of to_string len of substring not given means till last taken
    s2.pop_back(); //deletes the last ')'
    c=stoi(s2); 
    //cout<<a<<' '<<b<<' '<<c<<' '<<MOD<<' '<<op1<<' '<<op2;
    //parsing complete

    //Concept: As associativity of all inc operator is L->R so always left is calcuted first then right except for when precedence : op1<op2
    int ans;
    if((op2=='*' || op2=='/')&&(op1=='+' || op1=='-')){    //op2 has higher precedence calculation right to left
        ans=res(b,c,op2);
        ans=res(a,ans,op1);
    }else{  //complement of {op2 has higher precedence} computation left to right
        ans=res(a,b,op1);
        ans=res(ans,c,op2);
    }
    cout<<ans<<'\n';

}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    //cin->getline use a dummy cin to consume \n in "t\n"
    cin.ignore();   //std function
    while(tt--){
        solve();
    }
}

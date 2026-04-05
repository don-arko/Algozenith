/*
Recurring Fraction : 

Concept : for rational nos {nos representable in the form p/q} the fractional part is either
          recurring or terminating for sure  {this gives the end condition for simulation }

Simulate the Long division process
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;cin>>a>>b;  //given contraint b>0
    if(a==0){ //handling this case is imp as here there is no decimal part 
        //so sign must always be + but manual handling of sign can make the sign neg for 
        //sign of a,b = alike hence handle this case seperately
        cout<<0<<'\n';return;
    }
  
    string s="";
    //handling sign by ourself is neccesity as decimal part is also to be considered manually for which 0.something could have neg sign 
    //which isn't considered by to_string(a/b) if a/b =0 as it truncates the decimal part and hence sign of 0 is always +
    bool sign=false; //which means + no need to add
    if((a>0) ^ (b>0)) sign=true; //negative sign
    if(sign) s+="-";    
    a=abs(a);b=abs(b);

    s+=to_string(a/b);  
    //this could have handled the sign for us as a/b is converted to string with sign except if a/b=0 for 
    //which no sign is inserted as it assumes there isn't any decimal part there and 0 hence has no sign
    //but 0.something can have neg sign
    
    if(a%b==0) {
        cout<<s<<'\n';return ;
    }

    //fractional part if exists starts
    
    s+='.';
    map<int,int> m; //stores the rem and pos of quotient to be inserted for this remainder which later helps in qutient insertion 
    int rem=a%b;
    bool repeat=false;
    while(rem){       // stop condition on fraction part been terminating
        if(m.find(rem)!=m.end()){
            repeat=true;
            break;
        }
        else{ //rem not in set insert it 
            m[rem]=s.size(); 
                //for this rem quotient is inserted at s.size() {next few lines} wherein parenthesis is to 
                //be inserted if repeat starts at this rem
        }
        rem*=10;
        s+=to_string(rem/b); //quotient insertion at idx = prev s.size() 

        //updated rem for next itr
        rem%=b;
        //if(rem==0) break; could be used with while(true)
        }
        if(repeat){  //insert parenthesis at pos of the repeating rem wherein its q was earlier inserted
        s.insert(m[rem],1,'('); //1 is the number of times to insert
        s+=')';
    } 
    cout<<s<<"\n";
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}

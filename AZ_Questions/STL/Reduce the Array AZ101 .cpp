/*
Reduce the Array AZ101 : Since here we have to use min two element after each insertion use either a multimap{elements can repeat} or priority queue 
                        as we only req first 2 element {we can erase and get it for the sec time } at each stage
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){  
    int n;cin>>n;
    multiset<int> s;
    for(int i=0;i<n;i++){       //O(NlogN)
        int temp;cin>>temp;
        s.insert(temp);
    }int ans=0;
    while(s.size()>1){          //O(NlogN) 
        int cost=0;
        auto it1=s.begin();cost+=*it1;
        s.erase(it1);
        auto it2=s.begin();cost+=*it2;
        s.erase(it2);
        
        s.insert(cost);         //O(logN)
        //cout<<"cost : "<<cost<<'\n';
        ans+=cost;
        //print(s);

    }
    cout<<ans<<'\n';
}
signed main(){     //O(T* NlogN) it passes because of bound on ∀∑N=1e6 and logN = 20 per test case at max
    int t;cin>>t;
    while(t--) solve();
}

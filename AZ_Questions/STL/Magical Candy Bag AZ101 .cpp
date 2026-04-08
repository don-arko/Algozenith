/*
Magical Candy Bag AZ101 : just maintain a priority queue
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){   //O(klogn + n)= O(klogn)
    int n,k;cin>>n>>k;
    // priority_queue<int> pq;
    // //Repeated Push : O(nlogn)
    // while(n--){        
    //     int temp;cin>>temp; 
    //     pq.push(temp); 
    // }

    // Heapify on vector : O(n)
    vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
    priority_queue<int> pq(v.begin(),v.end());


    int ans=0;
    while(k--){        //O(klogn)
        int temp=pq.top();
        ans+=temp;
        pq.pop();
        pq.push(temp/2);
    }cout<<ans<<'\n';
}
signed main(){      //O( T* (K.log N)) =  // O(T* klogN)   now given ∀T ∑k <=1e6 {given}  so O(T* klogN)= ∀T ∑(klogN) = ∀T logN . ∑k = 20*1e6 = 1e7 <=1e8  {assuming logN to be worst case each time hence logN const and can be taken out of summation}
    int t;cin>>t;
    while(t--) solve();
}

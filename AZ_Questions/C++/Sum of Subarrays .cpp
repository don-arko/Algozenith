#include<bits/stdc++.h>
using namespace std;
void solve1(){                                  //Solution 1 : O(N^3)
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int st=0;st<n;st++){
        for(int en=st;en<n;en++){
            int sum=0;
            for(int i=st;i<=en;i++){
                sum+=a[i];
            }ans+=sum;
        }
    }
    cout<<ans<<" ";
}
void solve2(){                                    //Solution 2 : O(N^2)    {using slight optimisation}
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int en=st;en<n;en++){
            sum+=a[en];
            ans+=sum;
        }
    }
    cout<<ans<<" ";
}
void solve3(){                                  //Solution 3 : O(N)   {using contribution technique}
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int contri=(i+1)*(n-i);
        ans+=contri*a[i];
    }cout<<ans<<" ";
}
signed main(){
    int t;cin>>t;
    while(t--){
        solve1();
        cout<<endl;
    }
}

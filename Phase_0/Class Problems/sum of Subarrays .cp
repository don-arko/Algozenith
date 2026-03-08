//solution  O(N^3)
int ans=0;
for(int st=0;st<n;st++){
    for(int en=st;en<n;en++){
        int sum=0;
        for(int i=st;i<=en;i++){
             sum+=a[i];
        }ans+=sum;
   }
}
cout<<ans<<endl;


//solution  O(N^2)
int ans=0;
for(int st=0;st<n;st++){
    int sum=0;
    for(int en=st;en<n;en++){
        sum+=a[en];
        ans+=sum;
   }
}
cout<<ans<<endl;


//Solution O(N)  : using contribution technique
int sum=0;
for(int i=0;i<n;i++){
  sum+=a[i]*(i+1)*(n-i);
}
cout<<sum<<endl;



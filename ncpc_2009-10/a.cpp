#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n,m,k;cin>>n>>m>>k;
   int sum=n+m;int cnt=0;
   while(sum>k){
       int tmp=sum;
       sum/=k;
       cnt+=sum;
       sum+=(tmp%k);
   }
   cout<<cnt+1<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc=1;
    //int tc;cin>>tc;
    while(tc--) solve();
    return 0;
}

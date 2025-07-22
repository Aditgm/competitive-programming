#include<bits/stdc++.h>
using namespace std;
const int maxii=1e4+1;
vvi grap(maxii+1);
vector<bool> vis(maxii,0);
vi a(maxii),b(maxii);
void dfs(int u,int& sum){
    if(!vis[u]) {
    vis[u]=true;
    sum+=a[u];
    for(auto it:grap[u]){
        dfs(it,sum);
    }
  }
}
void solve(){
   int n,m;cin>>n>>m;
   bool ok=1;
   L(i,0,n-1){
       cin>>a[i];
   }
   L(i,0,m-1){
       int u,v;cin>>u>>v;
       grap[u].pb(v);
       grap[v].pb(u);
   }
   L(i,0,n-1){
       if(!vis[i]){
           int sum=0;
           dfs(i,sum);
           if(sum!=0) ok=0;
       }
   }
   if(ok) cout<<"POSSIBLE"<<endl;
   else cout<<"IMPOSSIBLE"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc=1;
    //int tc;cin>>tc;
    while(tc--) solve();
    return 0;
}

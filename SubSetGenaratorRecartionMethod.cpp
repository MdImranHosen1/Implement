#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;

#define pb  push_back

vector<int>subsetGe;
int n;
void search(int k)
{
  if(k==n+1)
  {
    for(int i:subsetGe)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
  else
  {
    subsetGe.pb(k);
    search(k+1);
    subsetGe.pop_back();
    search(k+1);
  }
}

int solve()
{
  cin>>n;
  search(1);
  return 0;
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  ll i,test=1;
  //cin>>test;
  for (i = 1; i <= test; ++i)
  {
    solve();    
  }
  return 0;
}



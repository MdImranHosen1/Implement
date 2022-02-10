#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
const int N             = 5e5 + 5;

vector<int>visit(N);
vector<int>prmtn;
int n;
void search()
{
  if(prmtn.size()==n)
  {
    for(int i:prmtn)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
  else
  {
    for (int i = 1;i<=n;++i)
    {
      if(visit[i])continue;
      visit[i]=1;
      prmtn.pb(i);
      search();
      visit[i]=0;
      prmtn.pop_back();
    }
  }
}
int main(){
  cin>>n;
  search();
  return 0;
}



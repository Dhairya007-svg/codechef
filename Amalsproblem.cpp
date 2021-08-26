#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define ff first
#define pb push_back
#define ss second

void solve()
{
  int n;
  cin>>n;

  vector <int> v(n);

  for(int i = 0; i<n; i++)
  {
    cin>>v[i];
  }

  int ans = 1;
  int cnt = 1;

  for(int i = 1; i<n; i++)
  {
    if(v[i] >= v[i-1])
     cnt++;
    else
    cnt = 1;

    ans = max(ans,cnt);
  }

  cout<<ans<<endl;

}

signed main(void)
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  /*int t;
  cin >> t;
  while (t--)*/
  solve();
  return 0;
}
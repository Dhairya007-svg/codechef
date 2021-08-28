#include <bits/stdc++.h>


using namespace std;

#define int long long
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vip vector<pair<int,int>>
#define endl "\n"


signed main()
{
    int n,m;
    cin>>n>>m;
    set <int> s;
    vector <int> a(n+1),b(n+1);
    for(int i = 0; i<n; i++)
     cin>>a[i];

    for(int i = n-1; i>=0; i--)
    {
       s.insert(a[i]);
       b[i+1]=s.size();
    }

    for(int i = 0; i<m; i++)
    {
        int xxx; 
        cin>>xxx;
        cout<<b[xxx]<<endl;
        cout<<flush;
    }
    
    return 0;
}
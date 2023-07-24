#include<bits/stdc++.h>
using namespace std;
#define Start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define srt(a) sort(a,a+n)
#define sort(a) sort(a.begin(), a.end())
#define pb(a) push_back(a)
#define tc ll t; cin>>t; while(t--)

void solve()
{
    ll n,t;
    cin>>n>>t;
    ll arr[n+12];
    for(ll i=1; i<n; i++) cin>>arr[i];

    ll k = 1;
    while(k < t)
    {
        k += arr[k];
    }
    (k == t) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

}
int main()
{
  Start
  
  solve();
}

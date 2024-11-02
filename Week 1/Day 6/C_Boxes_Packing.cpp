#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    #define ll long long int
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector <ll> v;
    map <ll,ll> mp;
    for(int i=0; i<n; i++) {
        ll x; cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    ll mx = 0;
    for( auto [x,y] : mp) {
        mx = max(y,mx);
    }

    cout << mx << endl;

    return 0;
}
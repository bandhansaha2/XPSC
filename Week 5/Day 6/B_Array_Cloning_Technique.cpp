#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<ll,ll> mp;
        ll mx = -1e18, ans = 0;
        for(int i=0; i<n; i++) {
            ll x; cin >> x;
            mp[x]++;
        }
        for(auto [x,y] : mp) {
            mx = max(mx,y);
        }

        while(mx < n) {
            ans++;
            ll rem = n - mx;
            ll add = mx;
            ans+=min(rem,add);
            mx+=min(add,rem);
        }
        
        cout << ans << endl;
        
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.rbegin(),x.rend()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        vector<ll>v(n),ans(n);
        ll sum = 0, all = (n*(n+1))/2;

        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        v.push_back(all-sum);
        ans = v;
        
        for(auto it: v) ans.push_back(it);

        int idx = (k*n)%(n+1), m = idx+n;
        
        for(int i=idx; i<m; i++) {
            cout << ans[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}
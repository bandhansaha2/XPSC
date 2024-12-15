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
        int n; cin >> n;
        vector <int> v(n,0), ans;
        bool vis[n+1] = {false};
        map <int,int> mp;
        
        int idx = 1, val = n;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            vis[v[i]] = true;
            mp[v[i]]++;
            if(mp[v[i]] == 1) ans.push_back(v[i]);
        }
        for(int i=1; i<=n; i++) {
            if(ans.size() == n) break;
            if(!vis[i]) ans.push_back(i);
        }
        for(auto it : ans) cout << it << " ";
        cout << endl;
    }

    return 0;
}
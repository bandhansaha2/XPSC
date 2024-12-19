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
        int n,k; cin >> n >> k;
        vector <int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        int l=-1,r=0, L=-1, R=-1; 
        for(int i=0; i<n; i++) {
            if(mp[v[i]] < k) continue;
            if(l == -1) l = v[i];
            if(i == n-1 || v[i+1] - v[i] > 1 || mp[v[i+1]] < k) {
                r = v[i];
                if(r-l >= R-L) {
                    R = r, L = l;
                }
                l = -1, r = -1;
            }
        }
        if(L == -1) cout << -1 << endl;
        else cout << L << " " << R << endl;
    }

    return 0;
}
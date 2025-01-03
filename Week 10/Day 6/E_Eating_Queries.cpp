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
        int n,q;
        cin >> n >> q;
        vector <int> v(n),pre(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(all(v));
        pre[0] = v[0];
        for(int i=1; i<n; i++) {
            pre[i] = pre[i-1] +v[i];
        } 
        while(q--) {
            int x; cin >> x;
            auto it = lower_bound(pre.begin(),pre.end(),x);
            if(it != pre.end()) {
                cout << it - pre.begin() + 1 << endl;
            }
            else cout << -1 << endl;
        }
    }

    return 0;
}
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
        vector <ll> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(all(v));
        ll count = 0, cost = 0;
        for(int i=0; i<n; i++) {
            if(v[i]-count > 0) cost += v[i]-count;
            count++;
        }
        cout << cost << endl;
    }

    return 0;
}
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
        vector <int> v(n);
        int XOR = 0;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            XOR ^= v[i];
        }
        int ans = XOR;
        for(int i=0; i<n; i++) {
            ans = min(ans,(XOR^v[i]));
        }
        cout << ans << endl; 
    }

    return 0;
}
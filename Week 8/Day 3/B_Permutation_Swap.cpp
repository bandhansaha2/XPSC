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
        vector <int> v(n+1);
        for(int i=1; i<=n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        for(int i=1; i<=n; i++) {
            ans = __gcd(ans,abs(i-v[i]));
        }
        cout << ans << endl;
    }

    return 0;
}
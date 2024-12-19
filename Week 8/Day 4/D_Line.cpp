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
        ll n; cin >> n;
        string s; cin >> s;
        ll ans = 0;
        vector <ll> v(n);
        for(int i=0; i<n; i++) {
            if(s[i] == 'L') {
                ans += i;
                v[i] = (n-i-1) - i;
            }
            else {
                ans += n-i-1;
                v[i] = i - (n-i-1);
            }
        }
        sort(all(v));
        for(int i=0; i<n; i++) {
            if(v[i] > 0) ans += v[i];
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;
const int mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    ll ans = 1;
    for(ll i=1; i*i<=n; i++) {
        if(n%i == 0 && (i/__gcd(i,n/i))*n/i == n) {
            ans = i;
        }
    }

    cout << ans << " " << n/ans << endl;

    return 0;
}
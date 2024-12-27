#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

ll LCM(int a, int b) {
    return ((a/__gcd(a,b))*b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;

    ll overlap = (n/LCM(a,b));
    ll ans = (n/a)*p + (n/b)*q - overlap*(p+q) + overlap*max(p,q);
    cout << ans << endl;

    return 0;
}
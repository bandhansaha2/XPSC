#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;
const int mod = 1e9+7;

int power (int a, int b) {
    int ans = 1 % mod;
    while(b) {
        if(b & 1) {
            ans = (1LL * ans%mod * a%mod) % mod;
        }

        a = 1LL * a * a % mod;

        b >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int a,b; cin >> a >> b;
        cout << power(a,b) << endl;
    }

    return 0;
}
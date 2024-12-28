#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const int mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int val = 1;
        for(int i=1; i<=n; i++) {
            val = (1LL * val % mod * i % mod) % mod;
        }
        cout << val << endl;
    }

    return 0;
}
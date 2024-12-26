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
    
    ll n,k;
    cin >> n >> k;
    vector <ll> v;

    for(ll i=1; i*i <= n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            if(n/i != i) v.push_back(n/i);
        }
    }
    sort(all(v));

    if(v.size() < k) cout << -1;
    else cout << v[k-1];

    return 0;
}
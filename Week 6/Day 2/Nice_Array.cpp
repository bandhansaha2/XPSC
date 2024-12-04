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
        int n; ll k;
        cin >> n >> k;

        vector <ll> v(n);
        vector <pair<ll,ll>> B(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            ll a = floor(static_cast<double>(v[i])/k);
            ll b = ceil(static_cast<double>(v[i])/k);
            B[i] = {a,b};
        }

        ll sum = 0;
        for(auto [x,y] : B) {
            sum += x;
        }

        if(sum != 0) {
            for(int i=0; i<n; i++) {
                sum -= B[i].first;
                sum += B[i].second;
                if(sum == 0) break;
            }
        }

        if(sum == 0) Yes;
        else No;
    }

    return 0;
}
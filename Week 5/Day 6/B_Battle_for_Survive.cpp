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
        int r=n-2, l=n-3;
        while(l>=0) {
            v[r] -= v[l];
            l--;
        }
        cout << v[n-1] - v[n-2] << endl;
    }

    return 0;
}
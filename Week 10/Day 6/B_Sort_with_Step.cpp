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
        int n,k;
        cin >> n >> k;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        if(is_sorted(all(v))) cout << 0 << endl;
        else {
            int count = 0;
            for(int i=0; i<n; i++) {
                int val = abs(v[i] - (i+1));
                if(val%k) count++;
            }
            if(count > 2) cout << -1 << endl;
            else if(count == 2) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}
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
        int n,k;
        cin >> n >> k;
        vector <int> v(k,0);
        for(int i=0; i<k; i++) {
            int indx, val;
            cin >> indx >> val;
            indx--;
            v[indx] += val;
        }
        sort(all(v));
        int ans = 0;
        for(int i=0; i<min(n,k); i++) {
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}
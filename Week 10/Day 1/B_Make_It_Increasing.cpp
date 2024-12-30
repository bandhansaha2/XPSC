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
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        for(int i=n-1; i>0; i--) {
            while(v[i-1] >= v[i] && v[i-1] != 0) {
                v[i-1] /= 2;
                ans++;
            }
        }
        for(int i=0; i<n-1; i++) {
            if(v[i] == v[i+1]) {
                ans =  -1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
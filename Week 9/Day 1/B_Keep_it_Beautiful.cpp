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
        vector<ll> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        string s = "1";
        ll curr = v[0];
        bool flag = true,fst = true;
        for(int i=1; i<n; i++) {
            if(curr <= v[i] && flag) {
                s.push_back('1');
                curr = v[i];
            }
            else if(v[i] <= v[0] && (curr <= v[i] || fst)) {
                s.push_back('1');
                curr = v[i];
                fst = false;
                flag = false;
            }
            else s.push_back('0');
        }
        cout << s << endl;
    }

    return 0;
}
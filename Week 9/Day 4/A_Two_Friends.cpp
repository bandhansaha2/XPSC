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
        map<int,int> mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]] = i+1;
        }
        int count = 0;
        for(int i=0; i<n; i++) {
            if(v[i] == mp[i+1] && mp[v[i]] == i+1) {
                count++;
                break;
            }
        }
        if(count) cout << 2 << endl;
        else cout << 3 << endl;
    }

    return 0;
}
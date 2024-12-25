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
        map <int,int> mp;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            mp[x] = i+1;
        }
        ll sum = 0;
        for(auto[x,y] : mp) {
            sum += y;
        }
        cout << sum << endl;
    }

    return 0;
}
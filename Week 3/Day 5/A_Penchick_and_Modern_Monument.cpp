#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map <int,int> mp;
        vector <int> v;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            v.push_back(x);    
            mp[x]++;
        }

        int mx = INT_MIN;
        for(auto [x,y]: mp) {
            mx = max(mx,y);
        }
        cout << n-mx << endl;;
    }

    return 0;
}
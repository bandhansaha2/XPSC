#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, count = 0; cin >> n;
        map <int,int> mp;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            mp[x]++;
            if(mp[x] % 2 == 0) count++;
        }
        cout << count << endl;
    }

    return 0;
}
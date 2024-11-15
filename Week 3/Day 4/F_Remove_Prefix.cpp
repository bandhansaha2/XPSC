#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        map <int,int> mp;
        int count = 0;
        for(int i=n-1; i>=0; i--) {
            mp[v[i]]++;
            if(mp[v[i]] == 1) count++;
            else break;
        }
        cout << n-count << endl;
    }

    return 0;
}
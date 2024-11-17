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
        vector <long long> v;
        map <long long,int> mp;
        for(int i=0; i<n; i++) {
            long long x;
            cin >> x;
            if (x != 0)
                mp[x]++;
            v.push_back(x);
        }
        if(mp.size() == 1 || mp.size() == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
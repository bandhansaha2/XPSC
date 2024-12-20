#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int XOR = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            XOR ^= v[i];
        }
        for(int i=0; i<n; i++) {
            v[i] ^= XOR;
        }
        int y=0;
        
        for(auto it: v) y^=it;
        if(y == 0) cout << XOR;
        else cout << -1;
        cout << endl;
    }

    return 0;
}
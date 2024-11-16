#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, mx = INT_MIN; cin >> n;
        vector <int> v(n);
        bool flag = true;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            if(i != 0 && flag) {
                if(v[i] < v[i-1]) {
                    if(abs(v[i] - v[i-1]) == 1) {
                        swap(v[i] , v[i-1]);
                    }
                }
                if(v[i] < v[i-1]) flag = false;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
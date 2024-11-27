#include <bits/stdc++.h>
#define ll long long
#define cYes cout << "YES" << '\n'
#define cNo cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, zeros = 0, mx = 0; cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            if(v[i] == 0) zeros++;
            mx = max(mx,v[i]);
        }
        if(zeros <= n-zeros+1) cout << 0 << endl;
        else {
            if(mx == 0) cout << 1 << endl;
            else if(mx == 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int y = 0;
        if(a == c || b == c) cout << "NO" << endl;
        else {
            for(int i=0; i<n; i++) {
                if(a[i] == b[i] && b[i] != c[i]) {
                    cout << "YES" << endl;
                    break;
                }
                else if (a[i] != b[i] && b[i] != c[i] && a[i] != c[i]) {
                    cout << "YES" << endl;
                    break;
                }
                y++;
            }
        }
        if(y == n) cout << "NO" << endl;
    }

    return 0;
}
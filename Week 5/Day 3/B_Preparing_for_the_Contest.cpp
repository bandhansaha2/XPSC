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
        int n,k;
        cin >> n >> k;
        int m = n - k;
        for(int i=m; i>=1; i--) {
            cout << i << " ";
        }
        if(m > 0) {
            for(int i=m+1; i<=n; i++) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
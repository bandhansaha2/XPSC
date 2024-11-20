#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n, m, count = 0;
        cin >> n >> m;
        vector <int> v(n+1);
        for(int i=1; i<=n; i++) {
            cin >> v[i];
        }
        for(int i=1; i<=m; i++) {
            int x; cin >> x; 
            if(v[x] > 0) v[x]--;
            else count++;
        }
        cout << count << endl;
    }

    return 0;
}
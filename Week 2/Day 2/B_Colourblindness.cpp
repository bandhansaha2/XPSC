#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a,b;
        cin >> a >> b;
        bool flag = true;

        for(int i=0; i<n; i++) {
            if((a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G')) continue;
            else {
                if(a[i] != b[i]) {
                    flag = false; 
                    break;
                }
            }
        }
        if(flag) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
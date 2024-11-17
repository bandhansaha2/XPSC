#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n < 4) cout << -1;
        else if(n%2 == 0) {
            if((1+n) % 3 != 0 ) cout << -1;
            else {
                for(int i=2; i<=n; i+=2) cout << i << " ";
                for(int i=1; i<=n; i+=2) cout << i << " ";
            }
        }
        else {
            if((n+2) % 3 != 0 && ((n-1)+1)%3 != 0) cout << -1;
            else {
                if((n+2) % 3 == 0) {
                    for(int i=1; i<=n; i+=2) cout << i << " ";
                    for(int i=2; i<=n; i+=2) cout << i << " ";
                }
                else {
                    for(int i=2; i<=n; i+=2) cout << i << " ";
                    for(int i=1; i<=n; i+=2) cout << i << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
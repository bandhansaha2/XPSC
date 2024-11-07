#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque <int> dq(n+1);
        int mn = 1, mx = n, i = 1, j = n, l, r;
        bool flag = false;
        
        for(int i=1; i<=n; i++) {
            cin >> dq[i];
        }

        while(i < j) {
            if(dq[i] != mn && dq[i] != mx && dq[j] != mn && dq[j] != mx) {
                l = i, r = j;
                flag = true;
                break;
            }
            else if(dq[i] == mn || dq[i] == mx) {
                if(dq[i] == mn) {
                    mn++;
                    i++;
                }
                else {
                    mx--;
                    i++;
                }
            }
            else if(dq[j] == mn || dq[j] == mx) {
                if(dq[j] == mn) {
                    mn++;
                    j--;
                }
                else {
                    mx--;
                    j--;
                }
            }
        }

        if(flag) {
            cout << l << " " << r;
        }
        else cout << -1;

        cout << endl;
    }

    return 0;
}
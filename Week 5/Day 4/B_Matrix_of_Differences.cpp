#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int mx = n*n, mn = 1;
        int arr[n+1][n+1] = {0};
        int count = 1;
        for(int i=1; i<=n; i++) {
            if(i%2 != 0) {
                for(int j=1; j<=n; j++) {
                    if(count % 2 != 0) {
                        arr[i][j] = mn;
                        mn++;
                    }
                    else {
                        arr[i][j] = mx;
                        mx--;
                    }
                    count++;
                }
            }
            else {
                for(int j=n; j>=1; j--) {
                    if(count % 2 != 0) {
                        arr[i][j] = mn;
                        mn++;
                    }
                    else {
                        arr[i][j] = mx;
                        mx--;
                    }
                    count++;
                }
            }
        }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}  
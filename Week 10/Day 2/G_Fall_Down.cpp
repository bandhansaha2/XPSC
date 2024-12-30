#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        char ar[n+1][m+1];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> ar[i][j];
            }
        }

        for(int i=0; i<n-1; i++) {
            for(int j=0; j<m; j++) {
                if(ar[i][j] != '.') {
                    //cout << i << j << " ";
                    int p = i, q = j;
                    //cout << p << q << " ";
                    char prev = ar[i][j];
                    //cout << prev << " ";
                    while(ar[p][q] != '.') {
                        p++;
                    }
                    cout << p << q << " ";
                    // ar[p][q] = prev;
                    // //cout << p << q << "-" << ar[p][q] << " ";
                    // if(i != p) ar[i][j] = '.';
                }
            }
        }

        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<m; j++) {
        //         cout << ar[i][j];
        //     }
        //     cout << endl;
        // }

        //cout << endl;

    }

    return 0;
}
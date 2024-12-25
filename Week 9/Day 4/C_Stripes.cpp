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
        char ar[8][8];
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                cin >> ar[i][j];
            }
        }

        bool flag = false;
        for(int i=0; i<8; i++) {
            if(flag) break;
            if(ar[i][0] != '.') {
                int j = 0;
                while(j<8) {
                    if(ar[i][j] == 'R') {
                        j++;
                        if(j == 8) {
                            cout << "R" << endl;
                            flag = true;
                        }
                    }
                    else break;
                }
            } 
        }
        if(!flag) {
            
            for(int j=0; j<8; j++) {
                if(flag) break;
                if(ar[0][j] != '.') {
                    int i = 0;
                    while(i<8) {
                        if(ar[i][j] == 'B') {
                            i++;
                            if(i == 8) {
                                cout << "B" << endl;
                                flag = true;
                            }
                        }
                        else break;
                    }
                } 
            }
        }
    }
 
    return 0;
}
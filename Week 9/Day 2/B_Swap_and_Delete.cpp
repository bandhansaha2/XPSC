#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int one = 0, zero = 0;
        for(auto it:s) {
            if(it == '1') one++;
            else zero++;
        }
        int ans = 0;
        for(auto it:s) {
            if(it == '1') {
                if(zero == 0) {
                    ans = one;
                    break;
                }
                zero--;
            }
            else {
                if(one == 0) {
                    ans = zero;
                    break;
                }
                one--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
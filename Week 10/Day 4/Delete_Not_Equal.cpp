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
        int n; string s;
        cin >> n >> s;
        int one = 0, zero = 0;
        for(auto it : s) {
            if(it == '0') zero++;
            else one++;
        }
        if(zero == one) cout << 1 << endl;
        else if(zero == 0) cout << one << endl;
        else if(one == 0) cout << zero << endl;
        else cout << 1 << endl;
    }

    return 0;
}
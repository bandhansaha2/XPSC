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
        string s;
        cin >> s;

        int n = s.length();
        bool flag = false;

        if(s == "()") {
            No;
            continue;
        }

        for(int i=0; i<n-1; i++) {
            if(s.substr(i,2) == ")(") {
                flag = true;
                break;
            }
        }
        
        string ans = "";
        if(flag) {
            for(int i=0; i<n; i++) {
                ans+="(";
            }
            for(int i=0; i<n; i++) {
                ans+=")";
            }
            Yes;
            cout << ans << endl;
        }
        else {
            for(int i=0; i<n; i++) {
                ans+="()";
            }
            Yes;
            cout << ans << endl;
        }
    }

    return 0;
}
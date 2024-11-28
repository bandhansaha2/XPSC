#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        string s;
        cin >> s;
        int l = 0, r = s.size()-1;
        if(s[l] < s[r]) cout << s << endl;
        else if(s[l] == s[r]) {
            while(true) {
                l++, r--;
                if(l >= r) {
                    cout << s << endl;
                    break;
                }
                if(s[l] > s[r]) {
                    reverse(s.begin(),s.end());
                    cout << s ;
                    reverse(s.begin(),s.end());
                    cout << s << endl;
                    break;
                }
                else if(s[l] < s[r]) {
                    cout << s << endl;
                    break;
                }
            }
        }
        else {
            reverse(s.begin(),s.end());
            cout << s ;
            reverse(s.begin(),s.end());
            cout << s << endl;
        }
    }

    return 0;
}
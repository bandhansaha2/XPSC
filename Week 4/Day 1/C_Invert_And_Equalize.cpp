#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int cnt1 = 0, cnt0 = 0, i = 0;
        while(i < n) {
            if(s[i] == '0') {
                while(s[i] == '0') {
                    i++;
                } 
                cnt0++;
            }
            else {
                while(s[i] == '1') {
                    i++;
                }
                cnt1++;
            }
        }
        cout << min(cnt0,cnt1) << endl;
        
    }

    return 0;
}
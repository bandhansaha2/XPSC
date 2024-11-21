#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s, t = "";
        cin >> s;
        for(int i=n-1; i>=0; i--) {
            if(s[i] != '0') {
                char c = 96 + (int(s[i])-48);
                t.push_back(c);
            }
            else {
                char c = 96 + (int(s[i-2])-48)*10 + int(s[i-1]-48);
                t.push_back(c);
                i-=2;
            }
        }
        reverse(t.begin(),t.end());
        cout << t << endl;
    }

    return 0;
}
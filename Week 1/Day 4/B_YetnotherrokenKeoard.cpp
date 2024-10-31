#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tst; cin >> tst;

    while(tst--) {
        string s; cin >> s;
        int upper=0, lower=0, n=s.size()-1;
        vector <char> v;

        for(int i=n; i>=0; i--) {
            if(s[i] == 'B') {
                upper++;
                continue;
            }
            if(s[i] == 'b') {
                lower++;
                continue;
            }
            if(lower>0 && islower(s[i])) {
                lower--;
                continue;
            }
            if(upper>0 && isupper(s[i])) {
                upper--;
                continue;
            }
            v.push_back(s[i]);
        }
        reverse(v.begin(),v.end());
        for(auto x:v) cout << x;
        cout << endl;
    }

    return 0;
}
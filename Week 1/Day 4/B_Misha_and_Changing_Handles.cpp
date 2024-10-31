#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    map <string,string> ans,has;

    for(int i=0; i<n; i++) {
        string s1,s2;
        cin >> s1 >> s2;

        if(has.find(s1) != has.end()) {
            ans[has[s1]] = s2;
            has[s2] = has[s1];
        }
        else {
            ans[s1] = s2;
            has[s2] = s1;
        }
    }
    cout << ans.size() << endl;
    for(auto[x,y] : ans) {
        cout << x << " " << y << endl;
    }

    return 0;
}
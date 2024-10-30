#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tst; cin >> tst;
    while(tst--) {
        int n, m=3;
        cin >> n;
        map <string,vector<int>> mp;
 
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                string s; cin >> s;
                mp[s].push_back (i);
            }
        }
 
        vector <int> ans(m+1);
 
        for(auto v : mp) {
            if(v.second.size()==1) {
                ans[v.second[0]]+=3;
            }
            if(v.second.size()==2) {
                ans[v.second[0]]++;
                ans[v.second[1]]++;
            }
        }
 
        for(int i=1; i<=m; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
 
    }
 
    return 0;
}
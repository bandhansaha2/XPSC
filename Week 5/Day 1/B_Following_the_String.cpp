#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    
    while(t--) {
        int n; cin >> n;
        map <char,int> mp;
        for(auto it : s) {
            mp[it] = 0;
        }
        string ans = "";
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            for(auto[x,y] : mp){
                if(v[i] == y) {
                    ans.push_back(x);
                    mp[x]++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
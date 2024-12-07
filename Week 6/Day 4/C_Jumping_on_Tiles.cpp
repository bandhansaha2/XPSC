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
        string s; cin >> s;
        map <char,vector<int>> mp;
        int n = s.size();
        vector <int> order;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i+1);
        }
        if(s.front() > s.back()) {
            int cost = abs(s.front() - s.back());
            for(char i=s.front(); i>=s.back(); i--) {
                char ch = i;

                if(mp.find(ch) != mp.end()) {
                    for(auto it : mp[ch]) {
                        order.push_back(it);
                    }
                }
            }
            cout << cost << " " << order.size() << endl;
            for(auto it:order) cout << it << " ";
            cout << endl;
        }
        else if(s.front() < s.back()) {
            int cost = abs(s.front()-s.back());
            for(char i=s.front(); i<=s.back(); i++) {
                if(mp.find(i) != mp.end()) {
                    for(auto it : mp[i]) {
                        order.push_back(it);
                    }
                }
            }
            cout << cost << " " << order.size() << endl;
            for(auto it:order) cout << it << " ";
            cout << endl;
        }
        else {
            cout << 0 << " " << mp[s.front()].size() << endl;
            for(auto it:mp[s.front()]) cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}
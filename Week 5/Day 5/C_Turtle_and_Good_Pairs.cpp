#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.rbegin(),x.rend()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<char,int>mp;
        string s; cin >> s;
        
        for(auto ch : s) {
            mp[ch]++;
        }

        vector <pair<int,char>> v;
        for(auto[x,y] : mp) {
            v.push_back({y,x});  
        } 
        sort(all(v));

        string ans(n,' ');

        int indx = 0;
        for(auto[count,ch] : v) {
            if(count==0) break;
            for(int i=0; i<count; i++) {
                if(indx>=n) indx = 1;
                ans[indx] = ch;
                indx+=2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
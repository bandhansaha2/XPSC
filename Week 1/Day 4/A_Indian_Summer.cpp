#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    map<pair<string,string>,int> mp;

    for(int i=0; i<n; i++) {
        string s1,s2;
        cin >> s1 >> s2;
        mp[{s1,s2}]++;
    }

    cout << mp.size();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    deque <string> dq,ans;
    map<string,int> mp;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        dq.push_back(s);
    }

    for(int i=n-1; i>=0; i--) {
        mp[dq[i]]++;
        if(mp[dq[i]] == 1) 
            cout << dq[i] << endl; 
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    deque <string> dq;
    for(int i=0; i<n; i++) {
        string s; 
        cin >> s;
        dq.push_front(s);
    }
    map <string,int> mp;
    for(auto it: dq) {
        mp[it]++;
        if(mp[it]==1) cout << it.substr(it.size()-2,2);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,customerNumber = 1; cin >> n;
    set <pair<int,int>> s;
    multiset <pair<int,int>> ml;
    vector <int> v;

    for(int i=1; i<=n; i++) {
        int type, money;
        cin >> type;

        if(type == 1) {
            cin >> money;
            s.insert({customerNumber,money});
            ml.insert({money,-customerNumber});
            customerNumber++;
        }
        else if(type == 2) {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else {
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
        
    }
    for( int val : v) cout << val << " ";
    //cout << endl;

    return 0;
}
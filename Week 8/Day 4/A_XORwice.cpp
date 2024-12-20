#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int x,y;
        cin >> x >> y;
        int curr = x^y;
        cout << curr << endl;
    }

    return 0;
}
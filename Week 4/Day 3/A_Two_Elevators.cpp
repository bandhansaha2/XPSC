#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int a, b, c, v1=0, v2=0;
        cin >> a >> b >> c;
        v1 = a-1;
        v2 = abs(b-c)+(c-1);
        if(v1 < v2) cout << 1;
        else if(v2 < v1) cout << 2;
        else cout << 3;
        cout << endl;
    }

    return 0;
}
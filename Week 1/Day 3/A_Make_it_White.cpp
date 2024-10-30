#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tst; cin >> tst;

    while(tst--) {
        int n; cin >> n;
        string str; cin >> str;

        int pos1 = -1, pos2 = -1;
        pos1 = str.find('B');
        pos2 = str.rfind('B');

        cout << pos2-pos1+1 << endl;
    }

    return 0;
}
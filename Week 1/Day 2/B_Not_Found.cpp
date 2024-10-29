#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str; cin >> str;

    map <char,int> mp;

    for(int i=0; i<str.length(); i++) {
        mp[str[i]]++;
    }

    bool flag = false;
    char ch;
    
    for(char i='a'; i<='z'; i++) {
        if(mp.count(i)==1) {
            continue;
        }
        else {
            ch = i;
            flag = true;
            break;
        }
    }

    if(flag) cout << ch;
    else cout << "None";

    return 0;
}

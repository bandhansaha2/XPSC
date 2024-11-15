#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;

        if(a == b) {
            cout << "=";
        }
        else if(a.back() == 'L' && b.back() == 'L') {
            if(a.size() > b.size()) {
                cout << ">";
            }
            else cout << "<";
        }
        else if(a.back() == 'S' && b.back() == 'S') {
            if(a.size() > b.size()) {
                cout << "<";
            }
            else cout << ">";
        }
        else if(a.back() == 'M' && b.back() == 'M') {
            if(a.size() > b.size()) {
                cout << ">";
            }
            else cout << "<";
        }
        else if(a.back() == 'M') {

            if(b.back() == 'S') {
                cout << ">";
            }
            if(b.back() == 'L') {
                cout << "<";
            }  
        }
        else if(a.back() == 'S') {
            if(b.back() == 'M') {
                cout << "<";
            }
            if(b.back() == 'L') {
                cout << "<";
            }  
        }
        else if(a.back() == 'L') {
            if(b.back() == 'M') {
                cout << ">";
            }
            if(b.back() == 'S') {
                cout << ">";
            }  
        }
        cout << endl;  
    }
    return 0;
}

        
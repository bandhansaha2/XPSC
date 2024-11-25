#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        if(n % 2 != 0) cout << "NO";
        else {
            string s ="";
            cout << "YES" << endl;
            char ch = 65;
            
            for(int i=0; i<n/2; i++) {
                if(ch > 90) ch = 65;
                s.push_back(ch);
                s.push_back(ch);
                ch++;
            }
            cout << s;
        }
        cout << endl;
        
    }

    return 0;
}
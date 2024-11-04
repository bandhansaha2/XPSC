#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int wheel; cin >> wheel;
        vector <int> v(wheel);
        for(int i=0;  i<wheel; i++) {
            cin >> v[i];
        }
        for(int j=0;  j<wheel; j++) {
            int o1; cin >> o1;
            string s1; cin >> s1;
            for(int i=0; i<o1; i++) {
                if(s1[i] == 'D') {
                    v[j]++;
                    if(v[j] == 10) v[j] = 0;
                }
                else {
                    v[j]--;
                    if(v[j] == -1) v[j] = 9;
                }
            }
            cout << v[j] << " ";     
        }
        //for(auto it : v) cout << it << " ";
        cout << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s = "";
        for(int i=1; i<=n; i++) {
            s+="BAN";
        }
        vector <pair<int,int>> v;
        int l=0, r=(3*n)-1;
        while(l < r) {
            while(s[l] != 'A') l++;
            while(s[r] != 'N') r--;
            if(l < r) {
                swap(s[l],s[r]);
                v.push_back({l+1,r+1});
            }
        }
        cout << v.size() << endl;
        for(auto [x,y] : v) {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}


// if(n == 1) cout << 1 << endl << 1 << " " << 2 << endl;
//         else {
//             int l=1, r=5;
//             vector <pair<int,int>> v;
//             while(r < 3*n) {
//                 if(s[l] == 'A') {
//                     if(s[r] == 'N') {
//                         swap(s[l],s[r]);
//                         v.push_back({l+1,r+1});
//                         while(l < 3*n) {
//                             if(s[l] == 'A') break;
//                             else l++; 
//                         }
//                         r++;
//                     }
//                     else r++;
//                 }
//                 else l++;
//             }
//             cout << v.size() << s << endl;
//             for(auto [x,y] : v) {
//                 cout << x << " " << y << endl;
//             }
//         }
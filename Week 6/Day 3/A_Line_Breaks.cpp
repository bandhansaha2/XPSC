#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n,x,count = 0;
        cin >> n >> x;
        vector <int> v(n);

        for(int i=0; i<n; i++) {
            string s; cin >> s;
            v[i] = s.size();
        }

        for(auto it : v) {
            x -= it;
            if(x >= 0) {
                count++;
            } 
            else break;
        }
        cout << count << endl;
    }

    return 0;
}
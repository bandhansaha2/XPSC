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
        int n;
        string s,t;
        cin >> n >> s >> t;
        int one = 0, zero = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') one++;
            else zero++; 
            if(t[i] == '1') one++;
            else zero++; 
        }
        if(zero%2==0 && one%2==0) Yes;
        else No;
        //cout << one << " " << zero << endl;
    }

    return 0;
}
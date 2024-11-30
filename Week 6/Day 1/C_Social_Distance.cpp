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
        int n,k;
        cin >> n >> k;
        string s; cin >> s;
        int l=0, r=0, count=0, ans=0;
        while(l<n && r<n) {
            if(l==0 && s[l] == '0') {
                r=l+1;
                bool flag = true;
                for(int i=1; i<=k; i++) {
                    if(r >= n) break;
                    if(s[r] == '1') {
                        flag = false;
                        break;
                    }
                    r++;
                }
                if(flag) {
                    s[l] = '1';
                    ans++;
                }
                count = 0;
                l++;
                continue;
            }
            if(s[l] == '0') {
                count++;
                if(count == k+1) {
                    if(l == n-1) {
                        s[l] = '1';
                        ans++;
                        count = 0;
                        l++;
                        continue;
                    }    
                    r=l+1;
                    bool flag = true;
                    for(int i=1; i<=k; i++) {
                        if(r >= n) break;
                        if(s[r] == '1') {
                            flag = false;
                            break;
                        }
                        r++;
                    }
                    if(flag) {
                        s[l] = '1';
                        ans++;
                    }
                    count = 0;
                }
            }
            else {
               count = 0; 
            }
            l++;
        }
        cout << ans << endl;
    }

    return 0;
}
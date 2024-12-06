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
        cin >> n;
        vector <ll> v(n);
        ll sum = 0;

        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        if(sum % n != 0) No;
        else {
            ll num = sum/n;
            for(int i=1; i<n-1; i++) {
                ll prev = v[i-1] , next = v[i+1], count = 0;
                if(prev > num) {
                    count = prev - num;
                    v[i-1]-=count;
                    v[i+1]+=count;
                }
                else if(prev < num) {
                    count = num - prev;
                    v[i-1]+=count;
                    v[i+1]-=count;
                }
            }
            bool flag = true;
            for(auto it : v) {
                //cout << it << " ~ " << num << endl;
                if(it != num) {
                    flag = false;
                    break;
                }
            }
            if(flag) Yes;
            else No;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c; cin >> a >> b >> c;

    int num = 1;
    
    while(true) {
        
        int ans = c*num;
        if(ans >= a && ans <= b) {
            cout << ans;
            break;
        }
        else if( ans > b) {
            cout << -1;
            break;
        }  

        num++;
    }

    return 0;
}
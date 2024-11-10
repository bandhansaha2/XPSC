#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x,y,z;
    float team=0,opponent=0,round=0;
    cin >> x >> y >> z;

    team = x*1;
    round+=x;

    team+=(y*(0.5));
    opponent+=(y*(0.5));
    round+=y;

    opponent+=(z*1);
    round+=z;

    team+=(4-round);
    if(team > opponent) cout << "Yes";
    else cout << "No";

    //cout << round;
    //cout << team << " " << opponent;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,num1,num2; cin >> a >> b;

    if(a == b) {
        cout << a+b;
        return 0;
    }
    else if(a > b) {
        num1 = a;
        if(num1 - 1 > b) {
            num2 = num1 - 1;
        }
        else {
            num2 = b;
        }
    }
    else {
        num1 = b;
        if(num1 - 1 > a) {
            num2 = num1 - 1;
        }
        else {
            num2 = a;
        }
    }

    cout << num1+num2;;

    return 0;
}
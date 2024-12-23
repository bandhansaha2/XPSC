#include <bits/stdc++.h>
using namespace std;
void print(int x, int n)
{
    long long int sum = 0;
    for(int i=2; i<=n; i+=2)
    {
        sum = sum + pow(x,i);
    }
    cout << sum;
}
int main()
{
    long long int x,n;
    cin >> x >> n;
    print(x,n);
    return 0;
}
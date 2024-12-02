#include <bits/stdc++.h>
using namespace std;


vector<int> search(string& pat, string& txt) {
        // code here
        vector <int> ans;
        int n=txt.size(), m=pat.length();
        if(n==0 || m==0 || m>n) return ans;
        for(int i=0; i<=n-m; i++) {
            if(txt[i] == pat.front()) {
                if(txt.substr(i,m) == pat) ans.push_back(i);
            }
        }
        return ans;
    }

int main()
{
        
    return 0;
}
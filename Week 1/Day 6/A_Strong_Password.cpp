#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
     while(t--) {
        string s,ans=""; cin >> s;
        int count = 0;

        if(s.length() == 1) {
            ans=s[0];
            if(s[0]+1 <= 'y') ans+=(s[0]+1);
            else ans+='a';
        }
        else {
            for(int i=0; i<s.length(); i++) {
                if(count == 0) {
                    if(s[i] == s[i+1]) {
                        char ch = s[i], ch1 = s[i]+1;
                        ans+=ch;

                        if(ch == 'z') ans+='a';
                        else {
                            if(ch1 <= 'z'){
                                ans+=ch1;
                            }
                            else ans+'a';
                        }

                        count ++;
                    }
                    else {
                        ans+=s[i];
                    }
                }
                else {
                    ans+=s[i];
                }       
            }
            if(count == 0) {
                if((ans[ans.length()-1]+1) <= 'z') ans+=ans[ans.length()-1]+1;
                else ans+='a';
            }   
        }
        cout << ans << endl;
     }

    return 0;
}
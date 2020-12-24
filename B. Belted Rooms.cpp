#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (s.find('<')==-1 || s.find('>')==-1) {
            cout<<n<<'\n';
            continue;
        }
        int sub = 0;
        for (int i=0;i<n;i++) {
            if (i==0) {
                if (!(s[i]=='-' || s[n-1]=='-')) sub++;
                continue;
            }
            if (!(s[i]=='-' || s[i-1]=='-')) sub++;
        }
        cout<<n-sub<<'\n';
    }
    return 0;
}